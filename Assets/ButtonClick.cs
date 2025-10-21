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

    public void init() {
        LeLog.Log($"OnButtonClick {Application.platform}");
        if(Application.platform == RuntimePlatform.Android){
            // Android demo
            LelinkSDK.getInstance().init("9999", "68bbd5646a32df651db861930f63158e");
        } else if(Application.platform == RuntimePlatform.IPhonePlayer){
            //iOS demo
            LelinkSDK.getInstance().init("15442","3750af11e5cc4592cfa5c95664d5f23c");
        } else {
            LelinkSDK.getInstance().init("__PLACEHOLDER__","__PLACEHOLDER__");
        }

    }

    public void browse() {
        LelinkSDK.getInstance().startBrowse();
    }

    /// 停止搜索
    public void stopBrowse() {
        LelinkSDK.getInstance().stopBrowse();
    }

    public void connectDevice() {
        LelinkSDK.getInstance().connect();
    }

    public void mirror() {
        string deviceName = AppCastConfig.getInstance().getDeviceName();
        if(deviceName != null && deviceName != ""){
            LelinkSDK.getInstance().startMirror(deviceName);
        } else {
            LeLog.LogWarning("deviceName is null or empty");
        }
    }

    public void stopMirror() {
        LelinkSDK.getInstance().stopMirror();
    }

}
