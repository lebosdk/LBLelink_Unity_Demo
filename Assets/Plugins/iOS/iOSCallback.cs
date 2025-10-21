using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class iOSCallback : MonoBehaviour
{
    [Serializable]
    private class CallbackData
    {
        public string callbackType;
        public string content;
    }

    public void callFromIOS(string content)
    {
        LeLog.Log($"iOSCallback callFromIOS: {content}");

        // 使用 JsonUtility 解析 JSON 字符串
        CallbackData data = JsonUtility.FromJson<CallbackData>(content);
        if (data.callbackType == "onDeviceFound")
        {
            // 设备列表回调
            onDeviceFound(data.content);
        }
    }

    private void onDeviceFound(string content)
    {
        // 解析设备列表
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
            LeLog.LogWarning($"iOSCallback onBrowserListener is null");
        }
    }
}
