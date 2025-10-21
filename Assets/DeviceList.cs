using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;


public class DeviceList : MonoBehaviour,OnBrowserListener
{
    private TMP_Dropdown deviceDropdown;
    private bool isFirst = true;
    // Start is called before the first frame update
    void Start()
    {
        LeLog.Log($"DeviceList Start");
        UIBehaviour[] uiComponents = GetComponents<UIBehaviour>();
        foreach (UIBehaviour ui in uiComponents)
        {
            LeLog.Log($"UI Component Type: {ui.GetType().Name}");
        }

        deviceDropdown = GetComponent<TMP_Dropdown>();
        if (deviceDropdown != null)
        {
            LeLog.Log($"DeviceList Dropdown found: {deviceDropdown.name}");
            // 这里可以初始化或设置 Dropdown
            deviceDropdown.ClearOptions();
            deviceDropdown.RefreshShownValue();
            deviceDropdown.onValueChanged.AddListener(OnDropdownValueChanged);
        }
        else
        {
            LeLog.LogError("DeviceList Dropdown component not found on this GameObject!");
        }
        LelinkSDK.getInstance().setOnBrowserListener(this);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnDestroy()
    {
        LeLog.Log($"DeviceList OnDestroy");
    }

    // 处理 Dropdown 值改变事件
    private void OnDropdownValueChanged(int index)
    {
        // 获取当前选中的文本
        string selectedText = deviceDropdown.options[index].text;
        AppCastConfig.getInstance().setDeviceName(selectedText);
        LeLog.Log($"OnDropdownValueChanged: {index} {selectedText}");
    }

    public void onDeviceFound(List<string> deviceList){
        LeLog.Log($"onDeviceFound: {deviceList.Count}");
        deviceDropdown.options.Clear();
        foreach (string device in deviceList)
        {
            deviceDropdown.options.Add(new TMP_Dropdown.OptionData(device));
        }
        LeLog.Log($"onDeviceFound deviceList: {deviceList.Count}");
        if(deviceList.Count > 0){
            // 获取当前选中的文本
            // string currentText = deviceDropdown.itemText.text;
            // LeLog.Log($"onDeviceFound now device: {currentText}");
            // if(currentText == null || currentText == ""){
            //     currentText = deviceList[0];
            // }
            if(isFirst){
                isFirst = false;
                // 设置选中第一个选项   
                string currentText = deviceList[0];
                deviceDropdown.value = 0;
                AppCastConfig.getInstance().setDeviceName(currentText);
                LeLog.Log($"onDeviceFound choose first device: {currentText}");
            }
        } else {
            isFirst = true;
            AppCastConfig.getInstance().setDeviceName("");
        }
        deviceDropdown.RefreshShownValue();
    }

    public void onDeviceFoundError(int errorCode, string errorMessage){
        LeLog.LogError($"onDeviceFoundError: {errorCode} {errorMessage}");
    }

}
