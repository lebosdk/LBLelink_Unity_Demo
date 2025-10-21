using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using static INativeBridge;


public class iOSBridge : INativeBridge
{
    private const string TAG = "iOSBridge";
    private OnBrowserListener onBrowserListener;
    #if UNITY_IOS

    [DllImport("__Internal")]
    private static extern void _init(string APPID,string APP_SECRET);

    [DllImport("__Internal")]
    private static extern void _startBrowse();

    [DllImport("__Internal")]
    private static extern void _stopBrowse();

    [DllImport("__Internal")]
    private static extern void _connect();

    [DllImport("__Internal")]
    private static extern void _disconnect();

    [DllImport("__Internal")]
    private static extern void _startMirror(string deviceName);
    
    [DllImport("__Internal")]
    private static extern void _stopMirror();
    #endif
    

    public void init(string appId, string appSecret){
        LeLog.Log($"{TAG} init");
        #if UNITY_IOS
        _init(appId,appSecret);
        #endif
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        LeLog.Log($"{TAG} setOnBrowserListener");
        this.onBrowserListener = listener;
    }

    public OnBrowserListener getOnBrowserListener(){
        LeLog.Log($"{TAG} getOnBrowserListener");
        return this.onBrowserListener;
    }

    public void startBrowse(){
        LeLog.Log($"{TAG} startBrowse");
        #if UNITY_IOS
        _startBrowse();
        #endif
    }

    public void stopBrowse(){
        LeLog.Log($"{TAG} stopBrowse");
        #if UNITY_IOS
        _stopBrowse();
        #endif
    }

    public void connect(){
        LeLog.Log($"{TAG} connect");
        #if UNITY_IOS
        _connect();
        #endif
    }

    public void disconnect(){
        LeLog.Log($"{TAG} disconnect");
        #if UNITY_IOS
        _disconnect();
        #endif
    }

    public void startMirror(string deviceName){
        LeLog.Log($"{TAG} startMirror");
        #if UNITY_IOS
        _startMirror(deviceName);
        #endif
    }

    public void stopMirror(){
        LeLog.Log($"{TAG} stopMirror");
        #if UNITY_IOS
        _stopMirror();
        #endif
    }

    public void uninit(){
        LeLog.Log($"{TAG} uninit");
    }
    
    
}
