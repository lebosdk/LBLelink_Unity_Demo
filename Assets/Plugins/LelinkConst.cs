// 授权错误码
public enum LelinkAuthErrorCode{
    // 授权成功
    AUTH_SUCCESS = 0,
    // 授权失败
    AUTH_FAILED = 10001,
}

// 连接错误码
public enum LelinkErrorCode{
    // 连接成功
    CONNECT_SUCCESS = 0,
    // 连接失败
    CONNECT_FAILED = 20001,
    // 连接超时
    CONNECT_TIMEOUT = 20002,
    // 连接中断
    CONNECT_INTERRUPTED = 20003,
    // 连接被拒绝
    CONNECT_REFUSED = 20004,
    // 连接已存在
    CONNECT_ALREADY_EXISTS = 20005,
    // 连接已断开
    CONNECT_DISCONNECTED = 20006,
    // 连接已关闭
    CONNECT_CLOSED = 20007, 
    // 连接已取消
    CONNECT_CANCELLED = 20008,
}

// 镜像错误码
public enum LelinkMirrorErrorCode{
    // 镜像成功
    MIRROR_SUCCESS = 0,
    // 镜像失败
    MIRROR_FAILED = 30001,
    // 镜像已断开
    MIRROR_DISCONNECTED = 30002,
    // 镜像已关闭
    MIRROR_CLOSED = 30003,
}

// 搜索错误码
public enum LelinkSearchErrorCode{
    // 搜索成功
    SEARCH_SUCCESS = 0,
    // 搜索失败
    SEARCH_FAILED = 40001,
    // 搜索已存在
    SEARCH_ALREADY_EXISTS = 40002,
    // 搜索已断开
    SEARCH_DISCONNECTED = 40003,
    // 搜索已关闭
    SEARCH_CLOSED = 40004,
}
