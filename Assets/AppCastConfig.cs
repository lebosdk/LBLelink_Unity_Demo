using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppCastConfig
{
    private static AppCastConfig instance;
    private string deviceName;
    private AppCastConfig(){

    }

    public static AppCastConfig getInstance(){
        if(instance == null){
            instance = new AppCastConfig();
        }
        return instance;
    }
    
    public void setDeviceName(string deviceName){
        this.deviceName = deviceName;
    }

    public string getDeviceName(){
        return this.deviceName;
    }
}
