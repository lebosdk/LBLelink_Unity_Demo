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

    public void connect(){
        LeLog.Log($"{TAG} connect");
        mNativeridge.connect();
    }

    public void disconnect(){
        LeLog.Log($"{TAG} disconnect");
        mNativeridge.disconnect();
    }

    public void startMirror(string deviceName){
        LeLog.Log($"{TAG} startMirror");
        mNativeridge.startMirror(deviceName);
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
