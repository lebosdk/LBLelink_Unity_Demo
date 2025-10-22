# LBLelink_Unity_Demo
Unity 接入 LBLelink Demo，支持 iOS 和 Android 平台。Unity 引擎和团结引擎均可使用，操作一致。

![Unity 工程图](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f871bc99c43.png)

## 架构
![架构图](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f873b918705.png)

- ButtonClicked

  在 Unity 中一个脚本文件，主要是用来关联 Unity 层的按钮事件
- INactiveBridge
  
  Unity 中的一个接口文件，`LelinkSDK`、`NativeBridge`、`iOSBridge`、`AndroidBridge`  都需要实现该接口方法
- LelinkSDK

  在 Unity 层中的封装管理类
- NativeBridge
  
  在 Unity 中对平台进行区分
- AndroidBridge
  
  安卓平台调用原生代码
- iOSBridge
  
  iOS 平台调用原生代码

- APIBridge
 
  安卓原生代码，对于 LelinkSDK 代码封装

- LBAPIBridge

  iOS 原生代码，对于 LelinkSDK 代码封装

## 代码

### ButtonClicked
作为一个 Unity 按钮脚本文件，包含 SDK 授权、设备搜索、停止搜索设备、开始镜像、停止镜像 等操作

```c++
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;  // Add TextMeshPro namespace
using static LelinkSDK;

public class ButtonClick : MonoBehaviour
{

    private string deviceName;
    // Start is called before the first frame update
    void Start()
    {
         // 获取当前对象上的 Button 组件
        Button connectButton = GetComponent<Button>();
        
        if (connectButton != null)
        {
            LeLog.Log("ButtonClick Button found!");
            // 添加点击事件
        
        }
        else
        {
            LeLog.LogError("ButtonClick Button component not found!");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /// 初始化 SDK
    public void init() {
        LeLog.Log($"OnButtonClick {Application.platform}");
        
        LelinkSDK.getInstance().init("15442","3750af11e5cc4592cfa5c95664d5f23c");
    }

    /// 开始搜索设备
    public void browse() {
        LelinkSDK.getInstance().startBrowse();
    }

    /// 停止搜索设备
    public void stopBrowse() {
        LelinkSDK.getInstance().stopBrowse();
    }

    /// 连接设备
    public void connectDevice() {
        string deviceName = AppCastConfig.getInstance().getDeviceName();
        if(deviceName != null && deviceName != ""){
            LelinkSDK.getInstance().connect(deviceName);
        } else {
            LeLog.LogWarning("deviceName is null or empty");
        }
    }

    /// 断开当前连接的设备
    public void disconnect() {
        LelinkSDK.getInstance().disconnect();
    }

    /// 开始镜像
    public void mirror() {
        LelinkSDK.getInstance().startMirror();
    }

    /// 停止镜像
    public void stopMirror() {
        LelinkSDK.getInstance().stopMirror();
    }
}
```
在 Unity 中对事件进行关联后，开始实现 `LelinkSDK` 的投屏操作

### LelinkSDK

在实现 `LelinkSDK` 之前，首先创建一个 `INactiveBridge.cs` 文件，作为一个协议声明，方便拓展平台，例如 `iOS`、`Android` 等

#### INativeBridge
```C++
public interface INativeBridge
{
    /// 授权
    void init(string appId, string appSecret);
    
    /// 设置设备搜索回调对象
    void setOnBrowserListener(OnBrowserListener listener);

    /// 获取设备搜索回调对象
    OnBrowserListener getOnBrowserListener();
    
    /// 开始搜索设备
    void startBrowse();

    /// 停止搜索设备
    void stopBrowse();

    /// 连接设备，通过设备名称进行连接
    void connect(string deviceName);

    /// 断开连接
    void disconnect();

    /// 开始镜像
    void startMirror();

    /// 停止镜像
    void stopMirror();

    /// 销毁并回收资源
    void uninit();
}
```

#### LelinkSDK

```C#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static INativeBridge;
using static NativeBridge;

public class LelinkSDK : INativeBridge
{

    private const string TAG = "LelinkSDK";
    private static LelinkSDK sInstance;
    private NativeBridge mNativeridge;
    

    private LelinkSDK(){
        mNativeridge = new NativeBridge();
    }

    public static LelinkSDK getInstance(){
        if(sInstance == null){
            sInstance = new LelinkSDK();
        }
        return sInstance;
    }

    public void init(string appId, string appSecret){
        LeLog.Log($"{TAG} init");
        mNativeridge.init(appId, appSecret);
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        LeLog.Log($"{TAG} setOnBrowserListener");
        mNativeridge.setOnBrowserListener(listener);
    }

    public OnBrowserListener getOnBrowserListener(){
        LeLog.Log($"{TAG} getOnBrowserListener");
        return mNativeridge.getOnBrowserListener();
    }

    public void startBrowse(){
        LeLog.Log($"{TAG} startBrowse");
        mNativeridge.startBrowse();
    }

    public void stopBrowse(){
        LeLog.Log($"{TAG} stopBrowse");
        mNativeridge.stopBrowse();
    }

    public void connect(string deviceName){
        LeLog.Log($"{TAG} connect");
        mNativeridge.connect(deviceName);
    }

    public void disconnect(){
        LeLog.Log($"{TAG} disconnect");
        mNativeridge.disconnect();
    }

    public void startMirror(){
        LeLog.Log($"{TAG} startMirror");
        mNativeridge.startMirror();
    }

    public void stopMirror(){
        LeLog.Log($"{TAG} stopMirror");
        mNativeridge.stopMirror();
    }

    public void uninit(){
        LeLog.Log($"{TAG} uninit");
        mNativeridge.uninit();
    }
}
```

#### NativeBridge
在该文件中，对不同的平台进行分别处理
```C#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static INativeBridge;
using static AndroidBridge;
using static iOSBridge;
using static VirtualNativeBridge;

public class NativeBridge : INativeBridge
{

    private const string TAG = "NativeBridge";
    private INativeBridge bridge;

    public NativeBridge(){
        LeLog.Log($"{TAG} Application.platform: {Application.platform}");
        if(Application.platform == RuntimePlatform.Android){
            bridge = new AndroidBridge();
        } else if(Application.platform == RuntimePlatform.IPhonePlayer){
            bridge = new iOSBridge();
        } else {
            bridge = new VirtualNativeBridge();
        }
        
    }

    public void init(string appId, string appSecret){
            if(bridge == null){
                LeLog.LogWarning($"{TAG} bridge is null");
                return;
            }
            LeLog.Log($"{TAG} init");
            bridge.init(appId, appSecret);
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} setOnBrowserListener");
        bridge.setOnBrowserListener(listener);
    }

    public OnBrowserListener getOnBrowserListener(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return null;
        }
        return bridge.getOnBrowserListener();
    }

    public void startBrowse(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} startBrowse");
        bridge.startBrowse();
    }

    public void stopBrowse(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} stopBrowse");
        bridge.stopBrowse();
    }

    public void connect(string deviceName){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} connect");
        bridge.connect(deviceName);
    }

    public void disconnect(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} disconnect");
        bridge.disconnect();
    }

    public void startMirror(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} startMirror");
        bridge.startMirror();
    }

    public void stopMirror(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} stopMirror");
        bridge.stopMirror();
    }

    public void uninit(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} uninit");
        bridge.uninit();
    }

}
```

## iOS 接入详细文档
 [Unity iOS 接入文档](https://github.com/lebosdk/LBLelink_Unity_Demo/blob/main/iOS_Unity_readme.md)
 
## Android 接入详细文档
 [Unity Android 接入文档](https://github.com/lebosdk/LBLelink_Unity_Demo/blob/main/Andriod_Unity_readme.md)
