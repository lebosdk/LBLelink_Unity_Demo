[Android SDK 接入参考文档](https://cloud.lebo.cn/document/d1d9146ab8257b31.html)

## 初始化 SDK

如下图，可以修改为自己申请到的 `AppID` 和 `AppSecret`

```
 LelinkSDK.getInstance().init("9999", "68bbd5646a32df651db861930f63158e");
```

![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f8536c55fdb.png)

## 开始搜索设备

```
LelinkSDK.getInstance().startBrowse();
```
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854542e00c.png)

搜索到同一个局域网的设备后，Android 会把设备列表回调给 DeviceList.cs

![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854896b948.png)

这样搜索的设备列表就可以显示到UI中，选中某个想要投屏的设备，就可以把手机画面镜像到TV端了。

## 开始镜像

```
LelinkSDK.getInstance().startMirror(deviceName);
```
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854b4ed301.png)

## 停止镜像

```
LelinkSDK.getInstance().stopMirror();
```
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-22/68f854d06e7b6.png)

