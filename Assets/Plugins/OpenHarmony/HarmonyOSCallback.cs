using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HarmonyOSCallback : MonoBehaviour
{
    public void callFromHarmonyOS(string content){
        LeLog.Log($"HarmonyOSCallback callFromHarmonyOS: {content}");
        List<string> deviceList = new List<string>();
        string[] devices = content.Split(',');
        foreach (string device in devices)
        {
            if(device != null && device != ""){
                deviceList.Add(device);
            }
        }
        // 调用 OnBrowserListener 的 onDeviceFound 方法
        OnBrowserListener onBrowserListener = LelinkSDK.getInstance().getOnBrowserListener();
        if (onBrowserListener != null)
        {
            onBrowserListener.onDeviceFound(deviceList);
        } else {
            LeLog.LogWarning($"onBrowserListener is null");
        }
    }
}
