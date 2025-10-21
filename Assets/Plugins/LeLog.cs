using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class LeLog
{
    private static string PRE_TAG = "LeLog";
    
    public static void Log(string message){
        Debug.Log($"{PRE_TAG} {message}");
    }

    public static void LogWarning(string message){
        Debug.LogWarning($"{PRE_TAG} {message}");
    }

    public static void LogWarning(string message, Exception e){
        Debug.LogWarning($"{PRE_TAG} {message} {e.Message} {e.StackTrace}");
    }

    public static void LogError(string message){
        Debug.LogError($"{PRE_TAG} {message}");
    }

    public static void LogError(string message, Exception e){
        Debug.LogError($"{PRE_TAG} {message} {e.Message} {e.StackTrace}");
    }

    
}
