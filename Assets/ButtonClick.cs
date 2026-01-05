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