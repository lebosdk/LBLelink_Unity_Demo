import {
  BasePlayPayload,
  BaseResultPayload,
  CastType,
  LelinkPlayerInfo,
  LelinkServiceInfo,
  session
} from "@lebo/lelink-sdk";
import { lelink, Lelink } from "@lebo/lelink-sdk/src/main/ets/lelink/Lelink";
import { ArrayList } from "@kit.ArkTS";
import { BusinessError } from "@kit.BasicServicesKit";
import tuanjie from 'libtuanjie.so';

export class APIBridge {
  private TAG = "APIBridge";
  private static instance: APIBridge | null = null;
  private devices?: LelinkServiceInfo[] = undefined
  private context?: Context = undefined
  private mDeviceNameArrString:string = ""

  private constructor() {
    // 私有构造函数，防止外部实例化
  }

  public static getInstance(): APIBridge {
    if (APIBridge.instance === null) {
      APIBridge.instance = new APIBridge();
    }
    return APIBridge.instance;
  }

  public setContext(context: Context) {
    console.log(this.TAG, "setContext " + context);
    this.context = context;
  }

  public init(appId: string, appSecret: string) {
    if (!this.context) {
      console.log(this.TAG, "init ignore, appId:", appId);
      return
    }
    console.log(this.TAG, "init appId:" + appId + " context:" + this.context);
    lelink.initial({
      debug: true,
      context: this.context,
      appID: appId,
      appSecret: appSecret,
      licenseSerialNumber: 'hpplay'
    })
    lelink.authorize().then((data: boolean) => {
      if (data) {
        lelink.on('state', (data) => {
          console.log(this.TAG, "state:", data.state, data.device.name);
        })
        console.info('鉴权成功')
      } else {
        console.info('鉴权失败')
      }
    })


    console.log(this.TAG, "init end " + session.getContext());
  }

  public startBrowse() {
    console.log(this.TAG, "startBrowse");
    lelink.on('devices-find', (data: ArrayList<LelinkServiceInfo>) => {
      this.devices = data.convertToArray()
      let needCallback = false
      if(this.devices == undefined  || this.devices?.length == 0){
        this.mDeviceNameArrString = ""
        needCallback = true
      } else {
        this.devices?.forEach((item) => {
          console.log(this.TAG, "deviceName:" + item.name);
          if(!this.mDeviceNameArrString.includes(item.name)){
            this.mDeviceNameArrString = this.mDeviceNameArrString + item.name + ","
            needCallback = true
          }
        })
      }
      if(needCallback) {
        tuanjie.TuanjieSendMessage("LelinkSDK","callFromHarmonyOS",this.mDeviceNameArrString);
      }

    }).emit('start-device-browser', false);
  }

  public stopBrowse() {
    console.log(this.TAG, "stopBrowse");

  }

  public connect() {

  }

  public connectByName(deviceName: string): Promise<boolean> {
    console.log(this.TAG, "connect");
    let device = this.devices?.find((item) => {
      return item.name == deviceName
    })
    if (!device) {
      console.log(this.TAG, "device not found");
      return Promise.resolve(false);
    }
    return lelink.emit('connect-by-device', device)

  }

  public disconnect() {
    console.log(this.TAG, "disconnect");
  }

  public startMirror(deviceName: string) {
    // deviceName = "Lelink#187-1"
    lelink.on('connect', (data: BasePlayPayload) => {
      if (data) {
        console.info(this.TAG, '连接成功')
        let playerInfo: LelinkPlayerInfo = new LelinkPlayerInfo()
        playerInfo.castType = CastType.CAST_MIRROR
        playerInfo.serviceInfo = data.device
        setTimeout(() => {
          console.log(this.TAG, "startMirror deviceName:", deviceName);
          lelink.emit('start-mirror', playerInfo!).catch((err: BusinessError) => {
            console.log(this.TAG, 'startMirror error', err);
          })
        }, 1000)
        return Promise.resolve(true);
      } else {
        console.info(this.TAG, '连接失败')
        return Promise.resolve(false);
      }
    })
    this.connectByName(deviceName);

  }

  public stopMirror() {
    console.log(this.TAG, "stopMirror");
  }

  public unInit() {
    console.log(this.TAG, "unInit");
  }
}


export function RegisterAPIBridge() {
  let register: object = new Object();
  register["APIBridge"] = APIBridge;
  return register;
}