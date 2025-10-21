using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface INativeBridge
{
    void init(string appId, string appSecret);

    void setOnBrowserListener(OnBrowserListener listener);

    OnBrowserListener getOnBrowserListener();
    void startBrowse();

    void stopBrowse();

    void connect();

    void disconnect();

    void startMirror(string deviceName);

    void stopMirror();

    void uninit();

}
