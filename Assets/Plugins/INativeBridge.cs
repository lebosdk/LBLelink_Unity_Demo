public interface INativeBridge
{
    /// 授权
    void init(string appId, string appSecret);
    
    /// 设置设备搜索回调对象
    void setOnBrowserListener(OnBrowserListener listener);

    /// 获取设备搜索回调对象
    OnBrowserListener getOnBrowserListener();
    
    /// 开始搜索设备
    void startBrowse();

    /// 停止搜索设备
    void stopBrowse();

    /// 连接设备，通过设备名称进行连接
    void connect(string deviceName);

    /// 断开连接
    void disconnect();

    /// 开始镜像
    void startMirror();

    /// 停止镜像
    void stopMirror();

    /// 销毁并回收资源
    void uninit();
}