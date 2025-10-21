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
