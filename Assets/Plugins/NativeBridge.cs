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
    //     #if UNITY_ANDROID
    //         bridge = new AndroidBridge();
    //     #elif UNITY_HARMONYOS
    //         bridge = new VirtualNativeBridge();
    //     #elif UNITY_IOS
    //    // iOS 平台特定代码
    //         // bridge = new iOSBridge();
    //    #if UNITY_HARMONYOS
    //         //bridge = new HarmonyOSBridge();
    //     #else
    //    // 其他平台代码
    //         bridge = new VirtualNativeBridge();
    //     #endif
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

    public void connect(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} connect");
        bridge.connect();
    }

    public void disconnect(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} disconnect");
        bridge.disconnect();
    }

    public void startMirror(string deviceName){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} startMirror");
        bridge.startMirror(deviceName);
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
