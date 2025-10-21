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
//            UnityPlayer.UnitySendMessage("AndroidCallback", "callFromAndroid", mDeviceListStringArr);
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
//            UnityPlayer.UnitySendMessage("AndroidCallback", "callFromAndroid", mDeviceListStringArr);
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