[Android SDK 接入参考文档](https://cloud.lebo.cn/document/d1d9146ab8257b31.html)

## 代码

### AndroidBridge

```java
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using static INativeBridge;

public class AndroidBridge : INativeBridge
{
    private const string TAG = "AndroidBridge";
    private AndroidJavaObject lelinkSoureSDK;
    private AndroidCallback androidCallback;
    private bool isInitialized = false;
    private OnBrowserListener onBrowserListener;

    public AndroidBridge(){
        LeLog.Log($"{TAG} AndroidBridge constructor {this.GetHashCode()}");
    }

    public void init(string appId, string appSecret){
        LeLog.Log($"{TAG} init {appId}");
        if (isInitialized)
        {
            return;
        }

        try
        {
            var pluginClass = new AndroidJavaClass("com.hpplay.sdk.source.APIBridge");
            lelinkSoureSDK = pluginClass.CallStatic<AndroidJavaObject>("getInstance");
            if (lelinkSoureSDK != null)
            {
                androidCallback = new AndroidCallback();
                if(this.onBrowserListener != null){
                    androidCallback.setOnBrowserListener(this.onBrowserListener);
                }
                lelinkSoureSDK.Call("init", appId, appSecret, androidCallback);
                isInitialized = true;
                LeLog.Log($"{TAG} SDK initialized successfully");
            }
            else
            {
                LeLog.LogError($"{TAG} Failed to get SDK instance");
            }
        }
        catch (System.Exception e)
        {
            LeLog.LogError($"{TAG} Error initializing SDK: {e.Message}  e.StackTrace: {e.StackTrace}");
        }
 
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        LeLog.Log($"{TAG} setOnBrowserListener {listener} {this.GetHashCode()}");
        this.onBrowserListener = listener;
        if(androidCallback != null){
            androidCallback.setOnBrowserListener(listener);
        }
    }

    public OnBrowserListener getOnBrowserListener(){
        LeLog.Log($"{TAG} getOnBrowserListener {this.onBrowserListener} {this.GetHashCode()}");
        return this.onBrowserListener;
    }

    public void startBrowse(){
        LeLog.Log($"{TAG} startBrowse");
        lelinkSoureSDK.Call("startBrowse");
    }

    public void stopBrowse(){
        LeLog.Log($"{TAG} stopBrowse");
        lelinkSoureSDK.Call("stopBrowse");
    }

    public void connect(){
        LeLog.Log($"{TAG} connect");
    }

    public void disconnect(){
        LeLog.Log($"{TAG} disconnect");
    }

    public void startMirror(string deviceName){
        LeLog.Log($"{TAG} startMirror {deviceName}");
        lelinkSoureSDK.Call("startMirror", deviceName);
    }

    public void stopMirror(){
        LeLog.Log($"{TAG} stopMirror");
        lelinkSoureSDK.Call("stopMirror");
    }

    public void uninit(){
        LeLog.Log($"{TAG} uninit");
    }
    
}

```

### AndroidCallback

```java
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class AndroidCallback:AndroidJavaProxy
{

    private OnBrowserListener onBrowserListener;

    public AndroidCallback() : base("com.hpplay.sdk.source.INotifyUnity")
    {
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        LeLog.Log($"AndroidCallback setOnBrowserListener {listener}");
        this.onBrowserListener = listener;
    }

    public void onDevicesFound(string devices)
    {
        LeLog.Log($"Devices found: {devices}");
    }

    public void callFromAndroid(string content){
        LeLog.Log($"AndroidCallback callFromAndroid {content}");
        // 将字符串转换为 ArrayList<string>
        List<string> deviceList = new List<string>();
        string[] devices = content.Split(',');
        foreach (string device in devices)
        {
            if(device != null && device != ""){
                deviceList.Add(device);
            }
        }
        // 调用 OnBrowserListener 的 onDeviceFound 方法
        if (this.onBrowserListener != null)
        {
            this.onBrowserListener.onDeviceFound(deviceList);
        } else {
            LeLog.LogWarning($"onBrowserListener is null");
        }
    }
   
}

```

### APIBridge

```java
package com.hpplay.sdk.source;


import android.app.Application;
import android.content.Context;
import android.text.TextUtils;

import com.hpplay.sdk.source.api.IBindSdkListener;
import com.hpplay.sdk.source.api.LelinkPlayerInfo;
import com.hpplay.sdk.source.api.LelinkSourceSDK;
import com.hpplay.sdk.source.browse.api.IBrowseListener;
import com.hpplay.sdk.source.browse.api.LelinkServiceInfo;
import com.hpplay.sdk.source.log.SourceLog;
import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;

import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.List;

public class APIBridge {
    private String TAG = "APIBridge";
    // 私有静态实例
    private static APIBridge instance;
    private Application mApplication;
    private LelinkSourceSDK mLelinkSourceSDK;
    private List<LelinkServiceInfo> mCacheList = new ArrayList<>();
    private String mDeviceListStringArr = "";
    private INotifyUnity unityCallback;

    // 私有构造函数
    private APIBridge() {
        // 初始化代码
        mLelinkSourceSDK = LelinkSourceSDK.getInstance();
    }

    // 公共静态方法，获取实例
    public static APIBridge getInstance() {
        if (instance == null) {
            synchronized (APIBridge.class) {
                if (instance == null) {
                    instance = new APIBridge();
                }
            }
        }
        return instance;
    }

    // 其他方法
    public void init(String APPID, String APP_SECRET, INotifyUnity unityCallback) {
        SourceLog.i(TAG, "init " + APPID);
        this.unityCallback = unityCallback;
        LelinkSourceSDK.getInstance()
                .setDebugMode(true)
                .setSdkInitInfo(getMainApplication(), APPID, APP_SECRET)
                .setBindSdkListener(new IBindSdkListener() {
                    @Override
                    public void onBindCallback(boolean success) {
                        SourceLog.i(TAG, "init onBindCallback " + success);
                    }
                }).bindSdk();
    }


    private Application getMainApplication() {
        if (mApplication != null) {
            return mApplication;
        }
        Application application = null;
        Class<?> activityThreadClass;
        try {
            activityThreadClass = Class.forName("android.app.ActivityThread");
            final Method method2 = activityThreadClass.getMethod(
                    "currentActivityThread", new Class[0]);
            // 得到当前的ActivityThread对象
            Object localObject = method2.invoke(null, (Object[]) null);
            final Method method = activityThreadClass
                    .getMethod("getApplication");
            application = (Application) method.invoke(localObject, (Object[]) null);
            mApplication = application;
        } catch (Exception e) {
            SourceLog.w(TAG, e);
        }
        return application;
    }


    public void startBrowse() {
        SourceLog.i(TAG, "startBrowse");
        LelinkSourceSDK.getInstance().setBrowseResultListener(new IBrowseListener() {
            @Override
            public void onBrowse(int result, List<LelinkServiceInfo> list) {
                if (list != null && !list.isEmpty()) {
                    SourceLog.i(TAG, "startBrowse onBrowse size:" + list.size());
                    mCacheList.clear();
                    mCacheList.addAll(list);
                }
                callOnBrowse();
            }
        });
        LelinkSourceSDK.getInstance().startBrowse(true, false);
    }

    private void callOnBrowse() {
        if (mCacheList == null || mCacheList.isEmpty()) {
            if (TextUtils.isEmpty(mDeviceListStringArr)) {
                return;
            }
            if (unityCallback != null) {
                unityCallback.callFromAndroid("");
            }
            return;
        }
        boolean deviceChange = false;
        for (LelinkServiceInfo info : mCacheList) {
            if (mDeviceListStringArr.contains(info.getName())) {
                continue;
            }
            deviceChange = true;
            mDeviceListStringArr += info.getName() + ",";
        }
        if (deviceChange) {
            SourceLog.i(TAG, "callOnBrowse " + mDeviceListStringArr);
            if (unityCallback != null) {
                unityCallback.callFromAndroid(mDeviceListStringArr);
            }
        }
    }

    public void stopBrowse() {
        LelinkSourceSDK.getInstance().stopBrowse();
    }


    public void connect(String name) {
        LelinkServiceInfo serviceInfo = getServiceInfo(name);
        if (serviceInfo == null) {
            SourceLog.w(TAG, "connect serviceInfo is null");
            return;
        }
        SourceLog.i(TAG, "connect");
        LelinkSourceSDK.getInstance().connect(serviceInfo);
    }

    public void disconnect() {

    }

    public void startMirror(String name) {
        LelinkServiceInfo serviceInfo = getServiceInfo(name);
        if (serviceInfo == null) {
            SourceLog.w(TAG, "startMirror serviceInfo is null");
            return;
        }
        SourceLog.i(TAG, "startMirror");
        LelinkPlayerInfo playerInfo = new LelinkPlayerInfo();
        playerInfo.setLelinkServiceInfo(serviceInfo);
        LelinkSourceSDK.getInstance().startMirror(playerInfo);
    }

    private LelinkServiceInfo getServiceInfo(String name) {
        if (mCacheList != null && !mCacheList.isEmpty()) {
            for (LelinkServiceInfo info : mCacheList) {
                if (info.getName().equals(name)) {
                    return info;
                }
            }
        }
        return null;
    }

    public void stopMirror() {
        LelinkSourceSDK.getInstance().stopPlay();
    }

    public void release() {

    }

}
```

## 初始化 SDK

如下图，可以修改为自己申请到的 `AppID` 和 `AppSecret`

```
 LelinkSDK.getInstance().init("9999", "68bbd5646a32df651db861930f63158e");
```

![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f8536c55fdb.png)

## 开始搜索设备

```
LelinkSDK.getInstance().startBrowse();
```
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854542e00c.png)

搜索到同一个局域网的设备后，Android 会把设备列表回调给 DeviceList.cs

![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854896b948.png)

这样搜索的设备列表就可以显示到UI中，选中某个想要投屏的设备，就可以把手机画面镜像到TV端了。

## 开始镜像

```
LelinkSDK.getInstance().startMirror(deviceName);
```
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854b4ed301.png)

## 停止镜像

```
LelinkSDK.getInstance().stopMirror();
```
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854d06e7b6.png)

