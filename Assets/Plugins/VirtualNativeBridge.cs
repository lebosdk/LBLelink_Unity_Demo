using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static INativeBridge;
using System.Runtime.CompilerServices;

/**
* 虚拟的NativeBridge，用于在 UnityHub中编译运行demo
*/
public class VirtualNativeBridge : INativeBridge
{
    private const string TAG = "VirtualNativeBridge";

    public void init(string appId, string appSecret){
        LeLog.Log($"{TAG} init {appId}");
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        LeLog.Log($"{TAG} setOnBrowserListener");
    }

    public OnBrowserListener getOnBrowserListener(){
        LeLog.Log($"{TAG} getOnBrowserListener");
        return null;
    }

    public void startBrowse(){
        LeLog.Log($"{TAG} startBrowse");
    }           

    public void stopBrowse(){
        LeLog.Log($"{TAG} stopBrowse");
    }

    public void connect(){
        LeLog.Log($"{TAG} connect");
    }   

    public void disconnect(){
        LeLog.Log($"{TAG} disconnect");
    }

    public void startMirror(string deviceName){
        LeLog.Log($"{TAG} startMirror");
    }

    public void stopMirror(){
        LeLog.Log($"{TAG} stopMirror");
    }

    public void uninit(){
        LeLog.Log($"{TAG} uninit");
    }   

}