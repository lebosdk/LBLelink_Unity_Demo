using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface OnBrowserListener
{
    /// 发现设备列表回调
    void onDeviceFound(List<string> deviceList);
    /// 发现设备列表错误回调
    void onDeviceFoundError(int errorCode, string errorMessage);
}
