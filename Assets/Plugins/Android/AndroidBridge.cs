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
    // 添加 Awake 方法确保 GameObject 存在
    // void Awake()
    // {
    //     LeLog.Log($"{TAG} Awake - GameObject name: {gameObject.name}");
        //  if (instance == null)
        // {
        //     instance = this;
        //     DontDestroyOnLoad(gameObject);
        // }
        // else
        // {
        //     Destroy(gameObject);
        // }
    // }

    // 添加 Start 方法进行初始化检查
    // void Start()
    // {
    //     LeLog.Log($"{TAG} Start - GameObject active: {gameObject.activeInHierarchy}");
    // }

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
        // LeLog.Log($"{TAG} listener set to: {(this.listener != null ? this.listener.GetType().Name : "null")}");
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
