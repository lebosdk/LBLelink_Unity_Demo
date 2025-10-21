#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88;
struct AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct HarmonyOSCallback_tA794A4D428582E4DAFC538FFCE239F1F3569975B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED;
struct LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152;
struct LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67;
struct OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC4249931E82CEBAEC1968B680E9E9A0DF4A946C6;
struct VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36;
struct iOSCallback_t3D56A33C897AEF5AF829D1A0FC6BA64D584C0A6E;
struct CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A;

IL2CPP_EXTERN_C RuntimeClass* AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____78E9FD91BCE4BFC5388D0AA095E15D9F5467573914EC43B0BBA7BC3CE936B285_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____EE4E5571FFAA403C4BAD502593A970129B135B65A84C12E586B5F39050891269_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral006481E7AA571E29C6FBEAA090790CA3AB601FF7;
IL2CPP_EXTERN_C String_t* _stringLiteral02C9C81C6799B36EF416A37206D1D5A254BDCE96;
IL2CPP_EXTERN_C String_t* _stringLiteral0904325D155CC39EC3C59A1A51A94909D5F6FFFD;
IL2CPP_EXTERN_C String_t* _stringLiteral09E74BAEB95C8FB0E307FC221C76913A37759F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB64A11A50E060A541CC1CE9B71464BD2DDEFC4;
IL2CPP_EXTERN_C String_t* _stringLiteral19A66527FE8082E019CE1CA449CC017124422660;
IL2CPP_EXTERN_C String_t* _stringLiteral1C01D139813B44C70ABE13ED0E9CCAC0FAC9ADC9;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral22650657D4B6910D814DC43AB900F11598D688AD;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26C0CC5E529EAD39DA412064E5DCB12BA057D784;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2B795D258CA9003BD4B177C6568EAB64E13D87;
IL2CPP_EXTERN_C String_t* _stringLiteral2DBCA44312DAD37341DA5126CFFDBCAD1969751E;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE4C2929F177912B8B57014F8EA222390389161;
IL2CPP_EXTERN_C String_t* _stringLiteral387B9615743ABADCE73EC4EF8FD89B85D0FB341A;
IL2CPP_EXTERN_C String_t* _stringLiteral3A91F953AF7F7AA38E9E38C956F2CC94A1F9375E;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB4C399EFA430C6B9CC697DD84EF1336F5755DA;
IL2CPP_EXTERN_C String_t* _stringLiteral4D058CCA9C5C876BAA39AEDDCD39E6962D7C95FA;
IL2CPP_EXTERN_C String_t* _stringLiteral4D3105E18DBA4DCE06EBA124E58803717C1F05B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4ED1DD2B28418AAA4D4F7976E554AA886FF95ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral52D13CFBB2F90EB78114B490E700652D93439B64;
IL2CPP_EXTERN_C String_t* _stringLiteral562D4517D10E6C731CDBCC8949E96CFCE8D04425;
IL2CPP_EXTERN_C String_t* _stringLiteral57474EBADEF2C3D8F59CCD424E2309A22BA52C75;
IL2CPP_EXTERN_C String_t* _stringLiteral5A0FB0297BC5FD2A00F2EEA32F53AD224507E2B8;
IL2CPP_EXTERN_C String_t* _stringLiteral5D36F6B78E6F7FE04A0F71108D3B460FE17928D0;
IL2CPP_EXTERN_C String_t* _stringLiteral5FD20BBF9C74B8916563FD1B8BC964E61DA609A7;
IL2CPP_EXTERN_C String_t* _stringLiteral5FDA0A5B6B98B577581FDA2594E0177A64B98653;
IL2CPP_EXTERN_C String_t* _stringLiteral60EA8DF9A307451C553EE46C1E468A6170A581E0;
IL2CPP_EXTERN_C String_t* _stringLiteral6266F0587CF377A222A6D357AA0E1AC1097FB758;
IL2CPP_EXTERN_C String_t* _stringLiteral62E8B0A7B75AD6EAEEF89847337A0C1358D17F16;
IL2CPP_EXTERN_C String_t* _stringLiteral6467033463F10780B3AB1F29D7E66B535E4B6556;
IL2CPP_EXTERN_C String_t* _stringLiteral689B0E8F7E55CF8E80381E04E118B6DCFFE98821;
IL2CPP_EXTERN_C String_t* _stringLiteral6B73F8BD6EC172C53FFCBA9E15141F6A1F7FD4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral71F2606C0DA56D201448D73F3A06BBB9F9470A86;
IL2CPP_EXTERN_C String_t* _stringLiteral75F726B89814308CFA14B832E718802DA72908EF;
IL2CPP_EXTERN_C String_t* _stringLiteral788DAB59E6F555BEC4552DA29A72914A6230B7C2;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE929875650C3C5B9ACF22D0D10DC9ADD3B6EB1;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2418825A67C10A0052B8B5DD327DECD4EA20B8;
IL2CPP_EXTERN_C String_t* _stringLiteral7B94F7C3D0166AE1EA464CA0E765E32D7E188E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61F504FC4ED45E20479EE89166365EC389DC33;
IL2CPP_EXTERN_C String_t* _stringLiteral80398EBD396D39D0F81696D2F9487B8DA42D308A;
IL2CPP_EXTERN_C String_t* _stringLiteral812FDC7F526E177FCB20C9DF732EA761398B28BC;
IL2CPP_EXTERN_C String_t* _stringLiteral8DFDA62E88A9E6B565B097F532D460607548188E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E0935B6618D2DB280DF2E06EBC61738ECFF497E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F6EA83943ED6FA22E8F7A6B9097A1EB85388CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral919C7AE82F3D441582A8CD43224B47568049E363;
IL2CPP_EXTERN_C String_t* _stringLiteral987B84E07C730591A1AF179C42E2989C3802E494;
IL2CPP_EXTERN_C String_t* _stringLiteral9D51F06F20D8C3C415C7CD3F7D7338E455077F10;
IL2CPP_EXTERN_C String_t* _stringLiteral9F67518CE893D3379E1D0F3AA66309BA9BABA9DB;
IL2CPP_EXTERN_C String_t* _stringLiteralA1F9E1CF535ED439A3D32F6E7319B3C7004BAF1D;
IL2CPP_EXTERN_C String_t* _stringLiteralAAA604EF80DFB9E7F38F09C3EE80E1E1EA85DDB9;
IL2CPP_EXTERN_C String_t* _stringLiteralAC3D01D93EFB2A11BE26B08483E8CF1AD5285391;
IL2CPP_EXTERN_C String_t* _stringLiteralB332B068D332BA2127BA01BDF7595C36756218B9;
IL2CPP_EXTERN_C String_t* _stringLiteralB679D1B1BBE8A8CEF6086DAD8A395E3EB9E27467;
IL2CPP_EXTERN_C String_t* _stringLiteralB71293C27CD100F913922F1037ABAABA8E1E6BA0;
IL2CPP_EXTERN_C String_t* _stringLiteralB7BA2B79B86B17710328C95CD8EC7B9E4B4E6600;
IL2CPP_EXTERN_C String_t* _stringLiteralB86B3D766225138202A066C820B8FF7C2A4F4F78;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5BEBD9D6754EEAA3464A389284D8D0CCB44AD4;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF4CF38B13EC796FE65092936DAE67D8ECEFF42;
IL2CPP_EXTERN_C String_t* _stringLiteralBF80D3EFDE275EC290374C67091396861EDDC361;
IL2CPP_EXTERN_C String_t* _stringLiteralC26A698B4231F574D2B130B4FCD4E3BEA98806EF;
IL2CPP_EXTERN_C String_t* _stringLiteralCE1145C1938753C52ED4D841313572444E54AA30;
IL2CPP_EXTERN_C String_t* _stringLiteralCFF8B55F68ED599441AEB19E5F57BF94030E95F7;
IL2CPP_EXTERN_C String_t* _stringLiteralD9787BC8806570A4E32BA265F9A5E95BCB1A1433;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE171A931480FE6455FFEDD938BCC79D34939EB2C;
IL2CPP_EXTERN_C String_t* _stringLiteralE232AAB75E7BB7A86320DECB5C9B93EA9676CA41;
IL2CPP_EXTERN_C String_t* _stringLiteralE29FC36DD635E101972BC2D2C1DE1EB5C9612BE6;
IL2CPP_EXTERN_C String_t* _stringLiteralE2FCDBA49D2DFC2C0CBB50DF761F609DB2AF5301;
IL2CPP_EXTERN_C String_t* _stringLiteralEF6BEDD0DA5A78F809F2853C168B13CC55ABC647;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C17AEAAA4F124F18AE614B4B5FE68409C91839;
IL2CPP_EXTERN_C String_t* _stringLiteralF975567F4E8DCC4F069B5B48E0BE908E1FC64D41;
IL2CPP_EXTERN_C String_t* _stringLiteralFA4C6A92CD299E4DEACAC489AC43DDB42F2911CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB165BC5E0A3CCAD41A6E452FFC3B764E4EC505;
IL2CPP_EXTERN_C String_t* _stringLiteralFF65FADF1CB1986837151B1C13604EBB9856E023;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9E568AE5CFF326E40DD2B0A2A57E38C1B8193D;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisCallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A_m5823A899EEB79DF7716085A665AFAD84CF74D2F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};
struct AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88  : public RuntimeObject
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___lelinkSoureSDK;
	AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* ___androidCallback;
	bool ___isInitialized;
	RuntimeObject* ___onBrowserListener;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152  : public RuntimeObject
{
};
struct LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C  : public RuntimeObject
{
	NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* ___mNativeridge;
};
struct NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67  : public RuntimeObject
{
	RuntimeObject* ___bridge;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC4249931E82CEBAEC1968B680E9E9A0DF4A946C6  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374  : public RuntimeObject
{
};
struct iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36  : public RuntimeObject
{
	RuntimeObject* ___onBrowserListener;
};
struct CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A  : public RuntimeObject
{
	String_t* ___callbackType;
	String_t* ___content;
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D235_t8B5B22D5E37B37A068C3FEA787FD2AF32AD2DFBE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D235_t8B5B22D5E37B37A068C3FEA787FD2AF32AD2DFBE__padding[235];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D473_tAF9FAE1833812FC1B6309928A352F1460F5A88F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D473_tAF9FAE1833812FC1B6309928A352F1460F5A88F9__padding[473];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface;
	intptr_t ___proxyObject;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct LelinkAuthErrorCode_tA64BB8CFCA08EB853208A7D004178B32EACAEEFE 
{
	int32_t ___value__;
};
struct LelinkErrorCode_t0A7B87F19E9014E008906BFA95DB57AD3DDB89BB 
{
	int32_t ___value__;
};
struct LelinkMirrorErrorCode_t1ABAAAA2ED03D2A696F29C6DF0359E2987EC7658 
{
	int32_t ___value__;
};
struct LelinkSearchErrorCode_t702C95FBCB05B0FAE6EF5DCA93F261EE5A2C8C8F 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	int32_t ___value__;
};
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	int32_t ___value__;
};
struct AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	RuntimeObject* ___onBrowserListener;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct HarmonyOSCallback_tA794A4D428582E4DAFC538FFCE239F1F3569975B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct iOSCallback_t3D56A33C897AEF5AF829D1A0FC6BA64D584C0A6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121_StaticFields
{
	__StaticArrayInitTypeSizeU3D235_t8B5B22D5E37B37A068C3FEA787FD2AF32AD2DFBE ___78E9FD91BCE4BFC5388D0AA095E15D9F5467573914EC43B0BBA7BC3CE936B285;
	__StaticArrayInitTypeSizeU3D473_tAF9FAE1833812FC1B6309928A352F1460F5A88F9 ___EE4E5571FFAA403C4BAD502593A970129B135B65A84C12E586B5F39050891269;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields
{
	String_t* ___PRE_TAG;
};
struct LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_StaticFields
{
	LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* ___sInstance;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass;
	intptr_t ___s_HashCodeMethodID;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49 (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidCallback__ctor_mFBBAE8ABC8EBC9FC7CF753214FD17906AC0A3FA3 (AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidCallback_setOnBrowserListener_mD2C651F5421B1537C4EA2D508DD3738094D695A0 (AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_LogError_mF1B50943E6842F149704A0AEC6B4D5D4E2A38173 (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9 (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__init_m248E2A0658F0749AE0AA10B5E595FD6E1FE87019 (String_t* ___0_APPID, String_t* ___1_APP_SECRET, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__startBrowse_m578A25D93A4F69DBF43282CA3ECB7544AC518FD3 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__stopBrowse_m9B1A0DD742F04A33425482D7EB45B28A0E5DAB75 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__connect_m31C31CFAA215B38794551D3DA1E73B7C6262B635 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__disconnect_m1AC5C7AB8E3FF5E7805221A9424549DE7928510E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__startMirror_m8CA8C60D002FB56A345DBF7C8EDFE884CFEC4996 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__stopMirror_mC7699FF0E958C82FA65D5DD80860E2D6522877F9 (const RuntimeMethod* method) ;
inline CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A* JsonUtility_FromJson_TisCallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A_m5823A899EEB79DF7716085A665AFAD84CF74D2F9 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSCallback_onDeviceFound_m498BF1851D04AC9121E8B80ED180FBDB8D4AA026 (iOSCallback_t3D56A33C897AEF5AF829D1A0FC6BA64D584C0A6E* __this, String_t* ___0_content, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* LelinkSDK_getInstance_m03E448879C53B34C7EA7E9D44F73D26183F0FEF5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LelinkSDK_getOnBrowserListener_mF90EBE953954E357AC2E460C2BC607AB28C16B79 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge__ctor_m5C65A8FAB7FE7623211ACA25B0126D2560675BDB (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK__ctor_m8BDA0D792048F83F9383286151E1BF9D98D9C699 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_init_m6F5067CF14A467F5197180EF0B74D6ED246197E1 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, String_t* ___0_appId, String_t* ___1_appSecret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_setOnBrowserListener_mA2B588825A082FFFDB1EFD06B69F61AF6295DAB5 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeBridge_getOnBrowserListener_m63F0EE6BC55186E9857B3393A88D203F98A1C345 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_startBrowse_mBC326362F477A6BC553085A7EA7E3439E1AE4B1B (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_stopBrowse_m26B8BD8FA34F85AB61F77F79D943379715B7396E (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_connect_m36D4AD001D0FAB0EA27425EA33AABBA2773BC2E4 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_disconnect_mF79A25454C855EB074C264CB32A5F122314BEC98 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_startMirror_m881B761C4D71BE5066CE68BD85D84B334D33F501 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, String_t* ___0_deviceName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_stopMirror_m2DF7B0DF5410433D4F8FDACA8400BA3F7B268AC4 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_uninit_m611FB1257D0CFA78E7383B69E96FFDBF7DDC7A53 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge__ctor_m8777C92A115792DBB634F5D28520014E37E453B7 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__ctor_mDEE3E0890F051BD4109571F3EB249B762D097A8F (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge__ctor_mD8B4972E9826BDBA326D4A3FEA9169F4D26FD210 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL _init(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _startBrowse();
IL2CPP_EXTERN_C void DEFAULT_CALL _stopBrowse();
IL2CPP_EXTERN_C void DEFAULT_CALL _connect();
IL2CPP_EXTERN_C void DEFAULT_CALL _disconnect();
IL2CPP_EXTERN_C void DEFAULT_CALL _startMirror(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _stopMirror();
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge__ctor_m8777C92A115792DBB634F5D28520014E37E453B7 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE4C2929F177912B8B57014F8EA222390389161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FD20BBF9C74B8916563FD1B8BC964E61DA609A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(2, __this);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DE4C2929F177912B8B57014F8EA222390389161, _stringLiteral5FD20BBF9C74B8916563FD1B8BC964E61DA609A7, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_init_m8AC4E816CE461C4C022171FEA16883F80A9E61A6 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, String_t* ___0_appId, String_t* ___1_appSecret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26C0CC5E529EAD39DA412064E5DCB12BA057D784);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ED1DD2B28418AAA4D4F7976E554AA886FF95ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75F726B89814308CFA14B832E718802DA72908EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DFDA62E88A9E6B565B097F532D460607548188E);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_appId;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8DFDA62E88A9E6B565B097F532D460607548188E, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		bool L_2 = __this->___isInitialized;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
	}
	try
	{
		{
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral26C0CC5E529EAD39DA412064E5DCB12BA057D784, NULL);
			V_0 = L_3;
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
			L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
			L_6 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_5, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
			__this->___lelinkSoureSDK = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___lelinkSoureSDK), (void*)L_6);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = __this->___lelinkSoureSDK;
			if (!L_7)
			{
				goto IL_00a1_1;
			}
		}
		{
			AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* L_8 = (AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3*)il2cpp_codegen_object_new(AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3_il2cpp_TypeInfo_var);
			AndroidCallback__ctor_mFBBAE8ABC8EBC9FC7CF753214FD17906AC0A3FA3(L_8, NULL);
			__this->___androidCallback = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___androidCallback), (void*)L_8);
			RuntimeObject* L_9 = __this->___onBrowserListener;
			if (!L_9)
			{
				goto IL_0067_1;
			}
		}
		{
			AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* L_10 = __this->___androidCallback;
			RuntimeObject* L_11 = __this->___onBrowserListener;
			NullCheck(L_10);
			AndroidCallback_setOnBrowserListener_mD2C651F5421B1537C4EA2D508DD3738094D695A0(L_10, L_11, NULL);
		}

IL_0067_1:
		{
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = __this->___lelinkSoureSDK;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
			String_t* L_15 = ___0_appId;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_15);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
			String_t* L_17 = ___1_appSecret;
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
			AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* L_19 = __this->___androidCallback;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_19);
			NullCheck(L_12);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_18, NULL);
			__this->___isInitialized = (bool)1;
			il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
			LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral75F726B89814308CFA14B832E718802DA72908EF, NULL);
			goto IL_00ab_1;
		}

IL_00a1_1:
		{
			il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
			LeLog_LogError_mF1B50943E6842F149704A0AEC6B4D5D4E2A38173(_stringLiteral4ED1DD2B28418AAA4D4F7976E554AA886FF95ED6, NULL);
		}

IL_00ab_1:
		{
			goto IL_00d0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ad;
		}
		throw e;
	}

CATCH_00ad:
	{
		Exception_t* L_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_20;
		Exception_t* L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_21);
		Exception_t* L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_23);
		String_t* L_25;
		L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE1145C1938753C52ED4D841313572444E54AA30)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral689B0E8F7E55CF8E80381E04E118B6DCFFE98821)), L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var)));
		LeLog_LogError_mF1B50943E6842F149704A0AEC6B4D5D4E2A38173(L_25, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00d0;
	}

IL_00d0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_setOnBrowserListener_mA1AE5F9EC31783F2FFA7E7B31710EB301C0EBB15 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FD20BBF9C74B8916563FD1B8BC964E61DA609A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA4C6A92CD299E4DEACAC489AC43DDB42F2911CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_listener;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, __this);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralFA4C6A92CD299E4DEACAC489AC43DDB42F2911CA, _stringLiteral5FD20BBF9C74B8916563FD1B8BC964E61DA609A7, L_0, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_4, NULL);
		RuntimeObject* L_5 = ___0_listener;
		__this->___onBrowserListener = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onBrowserListener), (void*)L_5);
		AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* L_6 = __this->___androidCallback;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* L_7 = __this->___androidCallback;
		RuntimeObject* L_8 = ___0_listener;
		NullCheck(L_7);
		AndroidCallback_setOnBrowserListener_mD2C651F5421B1537C4EA2D508DD3738094D695A0(L_7, L_8, NULL);
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidBridge_getOnBrowserListener_mC06EECF777A91047B72A2C95015ED86B81131C6E (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FD20BBF9C74B8916563FD1B8BC964E61DA609A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F2606C0DA56D201448D73F3A06BBB9F9470A86);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___onBrowserListener;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, __this);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral71F2606C0DA56D201448D73F3A06BBB9F9470A86, _stringLiteral5FD20BBF9C74B8916563FD1B8BC964E61DA609A7, L_0, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_4, NULL);
		RuntimeObject* L_5 = __this->___onBrowserListener;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_startBrowse_m5CA7BF999783D8C30701C7EE77DC36EDE110F177 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919C7AE82F3D441582A8CD43224B47568049E363);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF975567F4E8DCC4F069B5B48E0BE908E1FC64D41);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral919C7AE82F3D441582A8CD43224B47568049E363, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___lelinkSoureSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralF975567F4E8DCC4F069B5B48E0BE908E1FC64D41, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_stopBrowse_mED70FE9F6A2CB823AE7657ADD2CEDA1C904FC996 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D2B795D258CA9003BD4B177C6568EAB64E13D87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB4C399EFA430C6B9CC697DD84EF1336F5755DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral3AB4C399EFA430C6B9CC697DD84EF1336F5755DA, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___lelinkSoureSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral2D2B795D258CA9003BD4B177C6568EAB64E13D87, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_connect_mC87D12F4CEC32329CFA0BEF606D1EF77F1FAD0BB (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral987B84E07C730591A1AF179C42E2989C3802E494);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral987B84E07C730591A1AF179C42E2989C3802E494, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_disconnect_mED5264051C17F3DDF140B3948EC860C26E5CE156 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE929875650C3C5B9ACF22D0D10DC9ADD3B6EB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral7AE929875650C3C5B9ACF22D0D10DC9ADD3B6EB1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_startMirror_mC1F81CB588633718168143024E95BB963C5DAB49 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral812FDC7F526E177FCB20C9DF732EA761398B28BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF4CF38B13EC796FE65092936DAE67D8ECEFF42);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_deviceName;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral812FDC7F526E177FCB20C9DF732EA761398B28BC, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___lelinkSoureSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_deviceName;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralBEF4CF38B13EC796FE65092936DAE67D8ECEFF42, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_stopMirror_m766FFAC064B8E409E9D2523BC52DFD5FBA5A31D5 (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A91F953AF7F7AA38E9E38C956F2CC94A1F9375E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE171A931480FE6455FFEDD938BCC79D34939EB2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral3A91F953AF7F7AA38E9E38C956F2CC94A1F9375E, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___lelinkSoureSDK;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralE171A931480FE6455FFEDD938BCC79D34939EB2C, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBridge_uninit_mDD5300D6A12B9BCBEB18BDBDD14A22519D3EF17E (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57474EBADEF2C3D8F59CCD424E2309A22BA52C75);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral57474EBADEF2C3D8F59CCD424E2309A22BA52C75, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidCallback__ctor_mFBBAE8ABC8EBC9FC7CF753214FD17906AC0A3FA3 (AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D36F6B78E6F7FE04A0F71108D3B460FE17928D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral5D36F6B78E6F7FE04A0F71108D3B460FE17928D0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidCallback_setOnBrowserListener_mD2C651F5421B1537C4EA2D508DD3738094D695A0 (AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC3D01D93EFB2A11BE26B08483E8CF1AD5285391);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_listener;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAC3D01D93EFB2A11BE26B08483E8CF1AD5285391, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		RuntimeObject* L_2 = ___0_listener;
		__this->___onBrowserListener = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onBrowserListener), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidCallback_onDevicesFound_m0425E39217373B347ED3DAFE56A05F6E4446ACC7 (AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* __this, String_t* ___0_devices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62E8B0A7B75AD6EAEEF89847337A0C1358D17F16);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_devices;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral62E8B0A7B75AD6EAEEF89847337A0C1358D17F16, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidCallback_callFromAndroid_mE96F88E82C43CBBEE67CE6F8CA0705EFFB6D795B (AndroidCallback_t571312C0E1836C075406C23048FA13B118E214E3* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6467033463F10780B3AB1F29D7E66B535E4B6556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F67518CE893D3379E1D0F3AA66309BA9BABA9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		String_t* L_0 = ___0_content;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9F67518CE893D3379E1D0F3AA66309BA9BABA9DB, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = ___0_content;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_3, ((int32_t)44), 0, NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0043;
	}

IL_0024:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		String_t* L_9 = V_3;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_10 = V_3;
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0043:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_17 = __this->___onBrowserListener;
		if (!L_17)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_18 = __this->___onBrowserListener;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(0, OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9_il2cpp_TypeInfo_var, L_18, L_19);
		return;
	}

IL_005e:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral6467033463F10780B3AB1F29D7E66B535E4B6556, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__init_m248E2A0658F0749AE0AA10B5E595FD6E1FE87019 (String_t* ___0_APPID, String_t* ___1_APP_SECRET, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_APPID_marshaled = NULL;
	____0_APPID_marshaled = il2cpp_codegen_marshal_string(___0_APPID);

	char* ____1_APP_SECRET_marshaled = NULL;
	____1_APP_SECRET_marshaled = il2cpp_codegen_marshal_string(___1_APP_SECRET);

	reinterpret_cast<PInvokeFunc>(_init)(____0_APPID_marshaled, ____1_APP_SECRET_marshaled);

	il2cpp_codegen_marshal_free(____0_APPID_marshaled);
	____0_APPID_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_APP_SECRET_marshaled);
	____1_APP_SECRET_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__startBrowse_m578A25D93A4F69DBF43282CA3ECB7544AC518FD3 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(_startBrowse)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__stopBrowse_m9B1A0DD742F04A33425482D7EB45B28A0E5DAB75 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(_stopBrowse)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__connect_m31C31CFAA215B38794551D3DA1E73B7C6262B635 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(_connect)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__disconnect_m1AC5C7AB8E3FF5E7805221A9424549DE7928510E (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(_disconnect)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__startMirror_m8CA8C60D002FB56A345DBF7C8EDFE884CFEC4996 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_deviceName_marshaled = NULL;
	____0_deviceName_marshaled = il2cpp_codegen_marshal_string(___0_deviceName);

	reinterpret_cast<PInvokeFunc>(_startMirror)(____0_deviceName_marshaled);

	il2cpp_codegen_marshal_free(____0_deviceName_marshaled);
	____0_deviceName_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__stopMirror_mC7699FF0E958C82FA65D5DD80860E2D6522877F9 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(_stopMirror)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_init_mF7B98D965CBD1060A9E063D2515F0D0A269C50C2 (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, String_t* ___0_appId, String_t* ___1_appSecret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5BEBD9D6754EEAA3464A389284D8D0CCB44AD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralBE5BEBD9D6754EEAA3464A389284D8D0CCB44AD4, NULL);
		String_t* L_0 = ___0_appId;
		String_t* L_1 = ___1_appSecret;
		iOSBridge__init_m248E2A0658F0749AE0AA10B5E595FD6E1FE87019(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_setOnBrowserListener_m9CA4BB16DF36645CD9F4263036F9BED48768FE5E (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB86B3D766225138202A066C820B8FF7C2A4F4F78);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralB86B3D766225138202A066C820B8FF7C2A4F4F78, NULL);
		RuntimeObject* L_0 = ___0_listener;
		__this->___onBrowserListener = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onBrowserListener), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* iOSBridge_getOnBrowserListener_m72728B246021A183277E55FFB6AFE205A9A7AFA7 (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2418825A67C10A0052B8B5DD327DECD4EA20B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral7B2418825A67C10A0052B8B5DD327DECD4EA20B8, NULL);
		RuntimeObject* L_0 = __this->___onBrowserListener;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_startBrowse_mDD308BF414CB89D57873EDCC698E9B662F01910B (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1F9E1CF535ED439A3D32F6E7319B3C7004BAF1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralA1F9E1CF535ED439A3D32F6E7319B3C7004BAF1D, NULL);
		iOSBridge__startBrowse_m578A25D93A4F69DBF43282CA3ECB7544AC518FD3(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_stopBrowse_m49AD66395F0BFD032E2432FA302DFE3E36A91BE8 (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFF8B55F68ED599441AEB19E5F57BF94030E95F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralCFF8B55F68ED599441AEB19E5F57BF94030E95F7, NULL);
		iOSBridge__stopBrowse_m9B1A0DD742F04A33425482D7EB45B28A0E5DAB75(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_connect_mEA420D686EAA7FE9EF0CA08F913AC87D89EF4FC7 (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE29FC36DD635E101972BC2D2C1DE1EB5C9612BE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralE29FC36DD635E101972BC2D2C1DE1EB5C9612BE6, NULL);
		iOSBridge__connect_m31C31CFAA215B38794551D3DA1E73B7C6262B635(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_disconnect_m9E71854312BCA18B7E74BCD7FD6D83997226F5FC (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F6EA83943ED6FA22E8F7A6B9097A1EB85388CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral8F6EA83943ED6FA22E8F7A6B9097A1EB85388CC8, NULL);
		iOSBridge__disconnect_m1AC5C7AB8E3FF5E7805221A9424549DE7928510E(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_startMirror_mE46141C6290042ADA3DC82AE94CE44833E5EB885 (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0904325D155CC39EC3C59A1A51A94909D5F6FFFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral0904325D155CC39EC3C59A1A51A94909D5F6FFFD, NULL);
		String_t* L_0 = ___0_deviceName;
		iOSBridge__startMirror_m8CA8C60D002FB56A345DBF7C8EDFE884CFEC4996(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_stopMirror_m8B1A81FB57791047E17ADDA77D8444AB598CDC51 (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FDA0A5B6B98B577581FDA2594E0177A64B98653);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral5FDA0A5B6B98B577581FDA2594E0177A64B98653, NULL);
		iOSBridge__stopMirror_mC7699FF0E958C82FA65D5DD80860E2D6522877F9(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge_uninit_m45310DA246F26E8E9110C06EE25BC6B07C282DC7 (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71293C27CD100F913922F1037ABAABA8E1E6BA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralB71293C27CD100F913922F1037ABAABA8E1E6BA0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBridge__ctor_mDEE3E0890F051BD4109571F3EB249B762D097A8F (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSCallback_callFromIOS_m6E8D19F76647EA12D1F2816DAC0DACCDC5AAAB78 (iOSCallback_t3D56A33C897AEF5AF829D1A0FC6BA64D584C0A6E* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisCallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A_m5823A899EEB79DF7716085A665AFAD84CF74D2F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B73F8BD6EC172C53FFCBA9E15141F6A1F7FD4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7BA2B79B86B17710328C95CD8EC7B9E4B4E6600);
		s_Il2CppMethodInitialized = true;
	}
	CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A* V_0 = NULL;
	{
		String_t* L_0 = ___0_content;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6B73F8BD6EC172C53FFCBA9E15141F6A1F7FD4EC, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		String_t* L_2 = ___0_content;
		CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A* L_3;
		L_3 = JsonUtility_FromJson_TisCallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A_m5823A899EEB79DF7716085A665AFAD84CF74D2F9(L_2, JsonUtility_FromJson_TisCallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A_m5823A899EEB79DF7716085A665AFAD84CF74D2F9_RuntimeMethod_var);
		V_0 = L_3;
		CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___callbackType;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralB7BA2B79B86B17710328C95CD8EC7B9E4B4E6600, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___content;
		iOSCallback_onDeviceFound_m498BF1851D04AC9121E8B80ED180FBDB8D4AA026(__this, L_8, NULL);
	}

IL_0035:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSCallback_onDeviceFound_m498BF1851D04AC9121E8B80ED180FBDB8D4AA026 (iOSCallback_t3D56A33C897AEF5AF829D1A0FC6BA64D584C0A6E* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral006481E7AA571E29C6FBEAA090790CA3AB601FF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___0_content;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_1, ((int32_t)44), 0, NULL);
		V_2 = L_2;
		V_3 = 0;
		goto IL_0037;
	}

IL_0014:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		String_t* L_7 = V_4;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_8 = V_4;
		bool L_9;
		L_9 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = V_0;
		String_t* L_11 = V_4;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0033:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0037:
	{
		int32_t L_13 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* L_15;
		L_15 = LelinkSDK_getInstance_m03E448879C53B34C7EA7E9D44F73D26183F0FEF5(NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = LelinkSDK_getOnBrowserListener_mF90EBE953954E357AC2E460C2BC607AB28C16B79(L_15, NULL);
		V_1 = L_16;
		RuntimeObject* L_17 = V_1;
		if (!L_17)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_18 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(0, OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9_il2cpp_TypeInfo_var, L_18, L_19);
		return;
	}

IL_0053:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral006481E7AA571E29C6FBEAA090790CA3AB601FF7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSCallback__ctor_m61CA4F545822911F86B36ECFA4C3AC7E0A217CCA (iOSCallback_t3D56A33C897AEF5AF829D1A0FC6BA64D584C0A6E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackData__ctor_mAD38DC419EB6DE009D851776A6F957AF99B753A8 (CallbackData_t53CBE5AD0D2DA4159CFEF33EC29C58432F5B1B4A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK__ctor_m8BDA0D792048F83F9383286151E1BF9D98D9C699 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67*)il2cpp_codegen_object_new(NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67_il2cpp_TypeInfo_var);
		NativeBridge__ctor_m5C65A8FAB7FE7623211ACA25B0126D2560675BDB(L_0, NULL);
		__this->___mNativeridge = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNativeridge), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* LelinkSDK_getInstance_m03E448879C53B34C7EA7E9D44F73D26183F0FEF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* L_0 = ((LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_StaticFields*)il2cpp_codegen_static_fields_for(LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_il2cpp_TypeInfo_var))->___sInstance;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* L_1 = (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C*)il2cpp_codegen_object_new(LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_il2cpp_TypeInfo_var);
		LelinkSDK__ctor_m8BDA0D792048F83F9383286151E1BF9D98D9C699(L_1, NULL);
		((LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_StaticFields*)il2cpp_codegen_static_fields_for(LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_il2cpp_TypeInfo_var))->___sInstance = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_StaticFields*)il2cpp_codegen_static_fields_for(LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_il2cpp_TypeInfo_var))->___sInstance), (void*)L_1);
	}

IL_0011:
	{
		LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* L_2 = ((LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_StaticFields*)il2cpp_codegen_static_fields_for(LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C_il2cpp_TypeInfo_var))->___sInstance;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_init_mDD5E1AD6EFACC958BC578E28D7191E2385FA615A (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, String_t* ___0_appId, String_t* ___1_appSecret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DBCA44312DAD37341DA5126CFFDBCAD1969751E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral2DBCA44312DAD37341DA5126CFFDBCAD1969751E, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		String_t* L_1 = ___0_appId;
		String_t* L_2 = ___1_appSecret;
		NullCheck(L_0);
		NativeBridge_init_m6F5067CF14A467F5197180EF0B74D6ED246197E1(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_setOnBrowserListener_m3DAA3BEA631EA043382D6DC5E080AD43DA59C334 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0FB0297BC5FD2A00F2EEA32F53AD224507E2B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral5A0FB0297BC5FD2A00F2EEA32F53AD224507E2B8, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		RuntimeObject* L_1 = ___0_listener;
		NullCheck(L_0);
		NativeBridge_setOnBrowserListener_mA2B588825A082FFFDB1EFD06B69F61AF6295DAB5(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LelinkSDK_getOnBrowserListener_mF90EBE953954E357AC2E460C2BC607AB28C16B79 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB332B068D332BA2127BA01BDF7595C36756218B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralB332B068D332BA2127BA01BDF7595C36756218B9, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = NativeBridge_getOnBrowserListener_m63F0EE6BC55186E9857B3393A88D203F98A1C345(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_startBrowse_m947A144DF03ABFFDAB3CB268BC44A28323CADD9D (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2FCDBA49D2DFC2C0CBB50DF761F609DB2AF5301);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralE2FCDBA49D2DFC2C0CBB50DF761F609DB2AF5301, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		NullCheck(L_0);
		NativeBridge_startBrowse_mBC326362F477A6BC553085A7EA7E3439E1AE4B1B(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_stopBrowse_mCCFAF3F1E89306877AF1958B5556D4F32601E234 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C01D139813B44C70ABE13ED0E9CCAC0FAC9ADC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral1C01D139813B44C70ABE13ED0E9CCAC0FAC9ADC9, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		NullCheck(L_0);
		NativeBridge_stopBrowse_m26B8BD8FA34F85AB61F77F79D943379715B7396E(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_connect_m9FE2211FA4F769CE9A3523BFBE77D0943E5B1E03 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61F504FC4ED45E20479EE89166365EC389DC33);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral7D61F504FC4ED45E20479EE89166365EC389DC33, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		NullCheck(L_0);
		NativeBridge_connect_m36D4AD001D0FAB0EA27425EA33AABBA2773BC2E4(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_disconnect_m74A1459C2DF0F8449E2F1F18B25F43F1747C8CEE (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D058CCA9C5C876BAA39AEDDCD39E6962D7C95FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral4D058CCA9C5C876BAA39AEDDCD39E6962D7C95FA, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		NullCheck(L_0);
		NativeBridge_disconnect_mF79A25454C855EB074C264CB32A5F122314BEC98(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_startMirror_mC10A406067A745BA5E637B69301D87CA3E0B8723 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6266F0587CF377A222A6D357AA0E1AC1097FB758);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral6266F0587CF377A222A6D357AA0E1AC1097FB758, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		String_t* L_1 = ___0_deviceName;
		NullCheck(L_0);
		NativeBridge_startMirror_m881B761C4D71BE5066CE68BD85D84B334D33F501(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_stopMirror_mEB8A1D51C8D41EBD806808F02D5D889FC18D9736 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAA604EF80DFB9E7F38F09C3EE80E1E1EA85DDB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralAAA604EF80DFB9E7F38F09C3EE80E1E1EA85DDB9, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		NullCheck(L_0);
		NativeBridge_stopMirror_m2DF7B0DF5410433D4F8FDACA8400BA3F7B268AC4(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LelinkSDK_uninit_mD19705A5DF91ADCF6BAE4EC3AA81F1664F35FB39 (LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral562D4517D10E6C731CDBCC8949E96CFCE8D04425);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral562D4517D10E6C731CDBCC8949E96CFCE8D04425, NULL);
		NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* L_0 = __this->___mNativeridge;
		NullCheck(L_0);
		NativeBridge_uninit_m611FB1257D0CFA78E7383B69E96FFDBF7DDC7A53(L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields*)il2cpp_codegen_static_fields_for(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var))->___PRE_TAG;
		String_t* L_1 = ___0_message;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields*)il2cpp_codegen_static_fields_for(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var))->___PRE_TAG;
		String_t* L_1 = ___0_message;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_LogWarning_m609E4548A4D2B8722D395D6AD38FBA451C351DB3 (String_t* ___0_message, Exception_t* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields*)il2cpp_codegen_static_fields_for(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var))->___PRE_TAG;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5 = ___0_message;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Exception_t* L_8 = ___1_e;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_8);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		Exception_t* L_12 = ___1_e;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_12);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_13);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_LogError_mF1B50943E6842F149704A0AEC6B4D5D4E2A38173 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields*)il2cpp_codegen_static_fields_for(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var))->___PRE_TAG;
		String_t* L_1 = ___0_message;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog_LogError_m8A6FE1AA59918C46F5097BC17967E81C98D35CEC (String_t* ___0_message, Exception_t* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields*)il2cpp_codegen_static_fields_for(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var))->___PRE_TAG;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5 = ___0_message;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Exception_t* L_8 = ___1_e;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_8);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		Exception_t* L_12 = ___1_e;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_12);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_13);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog__ctor_m75E2B04F208E6EBAD537C9946EBCEEAA635A6414 (LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeLog__cctor_m107D104ABA3EE5EEC3C54DD288B5C61A9D5D34FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C17AEAAA4F124F18AE614B4B5FE68409C91839);
		s_Il2CppMethodInitialized = true;
	}
	{
		((LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields*)il2cpp_codegen_static_fields_for(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var))->___PRE_TAG = _stringLiteralF0C17AEAAA4F124F18AE614B4B5FE68409C91839;
		Il2CppCodeGenWriteBarrier((void**)(&((LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_StaticFields*)il2cpp_codegen_static_fields_for(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var))->___PRE_TAG), (void*)_stringLiteralF0C17AEAAA4F124F18AE614B4B5FE68409C91839);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge__ctor_m5C65A8FAB7FE7623211ACA25B0126D2560675BDB (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB64A11A50E060A541CC1CE9B71464BD2DDEFC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60EA8DF9A307451C553EE46C1E468A6170A581E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral60EA8DF9A307451C553EE46C1E468A6170A581E0, _stringLiteral0CB64A11A50E060A541CC1CE9B71464BD2DDEFC4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_3, NULL);
		int32_t L_4;
		L_4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88* L_5 = (AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88*)il2cpp_codegen_object_new(AndroidBridge_tC5DBDD1EC2B6DC7278CB7523EE307C02101CEB88_il2cpp_TypeInfo_var);
		AndroidBridge__ctor_m8777C92A115792DBB634F5D28520014E37E453B7(L_5, NULL);
		__this->___bridge = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bridge), (void*)L_5);
		return;
	}

IL_0039:
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36* L_7 = (iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36*)il2cpp_codegen_object_new(iOSBridge_t98A05DF84AC58F76C0D102F10D6D6DA719D22E36_il2cpp_TypeInfo_var);
		iOSBridge__ctor_mDEE3E0890F051BD4109571F3EB249B762D097A8F(L_7, NULL);
		__this->___bridge = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bridge), (void*)L_7);
		return;
	}

IL_004d:
	{
		VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* L_8 = (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374*)il2cpp_codegen_object_new(VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374_il2cpp_TypeInfo_var);
		VirtualNativeBridge__ctor_mD8B4972E9826BDBA326D4A3FEA9169F4D26FD210(L_8, NULL);
		__this->___bridge = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bridge), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_init_m6F5067CF14A467F5197180EF0B74D6ED246197E1 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, String_t* ___0_appId, String_t* ___1_appSecret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387B9615743ABADCE73EC4EF8FD89B85D0FB341A);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral387B9615743ABADCE73EC4EF8FD89B85D0FB341A, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		String_t* L_2 = ___0_appId;
		String_t* L_3 = ___1_appSecret;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_setOnBrowserListener_mA2B588825A082FFFDB1EFD06B69F61AF6295DAB5 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAB165BC5E0A3CCAD41A6E452FFC3B764E4EC505);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralFAB165BC5E0A3CCAD41A6E452FFC3B764E4EC505, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		RuntimeObject* L_2 = ___0_listener;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeBridge_getOnBrowserListener_m63F0EE6BC55186E9857B3393A88D203F98A1C345 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return (RuntimeObject*)NULL;
	}

IL_0014:
	{
		RuntimeObject* L_1 = __this->___bridge;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_startBrowse_mBC326362F477A6BC553085A7EA7E3439E1AE4B1B (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D51F06F20D8C3C415C7CD3F7D7338E455077F10);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral9D51F06F20D8C3C415C7CD3F7D7338E455077F10, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_stopBrowse_m26B8BD8FA34F85AB61F77F79D943379715B7396E (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF65FADF1CB1986837151B1C13604EBB9856E023);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralFF65FADF1CB1986837151B1C13604EBB9856E023, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(4, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_connect_m36D4AD001D0FAB0EA27425EA33AABBA2773BC2E4 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9E568AE5CFF326E40DD2B0A2A57E38C1B8193D);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralFF9E568AE5CFF326E40DD2B0A2A57E38C1B8193D, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_disconnect_mF79A25454C855EB074C264CB32A5F122314BEC98 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09E74BAEB95C8FB0E307FC221C76913A37759F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral09E74BAEB95C8FB0E307FC221C76913A37759F5B, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(6, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_startMirror_m881B761C4D71BE5066CE68BD85D84B334D33F501 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D13CFBB2F90EB78114B490E700652D93439B64);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral52D13CFBB2F90EB78114B490E700652D93439B64, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		String_t* L_2 = ___0_deviceName;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(7, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_stopMirror_m2DF7B0DF5410433D4F8FDACA8400BA3F7B268AC4 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80398EBD396D39D0F81696D2F9487B8DA42D308A);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral80398EBD396D39D0F81696D2F9487B8DA42D308A, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(8, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBridge_uninit_m611FB1257D0CFA78E7383B69E96FFDBF7DDC7A53 (NativeBridge_tC5D70EF1D9880B44D9A92020B405590F94A48D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788DAB59E6F555BEC4552DA29A72914A6230B7C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___bridge;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral22650657D4B6910D814DC43AB900F11598D688AD, NULL);
		return;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral788DAB59E6F555BEC4552DA29A72914A6230B7C2, NULL);
		RuntimeObject* L_1 = __this->___bridge;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(9, INativeBridge_t13825BE8E9B3FF862CD6B00A5B465691CC1447ED_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HarmonyOSCallback_callFromHarmonyOS_m60503769725DE405B40C737878943C13BDF54E7F (HarmonyOSCallback_tA794A4D428582E4DAFC538FFCE239F1F3569975B* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6467033463F10780B3AB1F29D7E66B535E4B6556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB679D1B1BBE8A8CEF6086DAD8A395E3EB9E27467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		String_t* L_0 = ___0_content;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB679D1B1BBE8A8CEF6086DAD8A395E3EB9E27467, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = ___0_content;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_3, ((int32_t)44), 0, NULL);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_0024:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		String_t* L_9 = V_4;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_10 = V_4;
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = V_4;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0043:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0047:
	{
		int32_t L_15 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		LelinkSDK_tB0DAEF28EA423A0D026E7576B65463F9C4BDE08C* L_17;
		L_17 = LelinkSDK_getInstance_m03E448879C53B34C7EA7E9D44F73D26183F0FEF5(NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = LelinkSDK_getOnBrowserListener_mF90EBE953954E357AC2E460C2BC607AB28C16B79(L_17, NULL);
		V_1 = L_18;
		RuntimeObject* L_19 = V_1;
		if (!L_19)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_20 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_0;
		NullCheck(L_20);
		InterfaceActionInvoker1< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(0, OnBrowserListener_tC44603E2B832C7112BA20745C75DEA6C4EFE61D9_il2cpp_TypeInfo_var, L_20, L_21);
		return;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_LogWarning_m54D8F5AD38D1D1BBC3E1040140A00CC0F9A61FB9(_stringLiteral6467033463F10780B3AB1F29D7E66B535E4B6556, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HarmonyOSCallback__ctor_m75ADAF4117DF3AAAEB71B82449077AD63BAC0743 (HarmonyOSCallback_tA794A4D428582E4DAFC538FFCE239F1F3569975B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_init_m0A8138EEBFAA344A8335CAEDC0EA06F9485D1B2A (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, String_t* ___0_appId, String_t* ___1_appSecret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D3105E18DBA4DCE06EBA124E58803717C1F05B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_appId;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4D3105E18DBA4DCE06EBA124E58803717C1F05B7, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_setOnBrowserListener_mF02B8828D432CD85727CFA8E1FF6370A742446C5 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF80D3EFDE275EC290374C67091396861EDDC361);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralBF80D3EFDE275EC290374C67091396861EDDC361, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VirtualNativeBridge_getOnBrowserListener_m2FA86EF1CF0466960654497E294EC0B9649DA2FB (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A66527FE8082E019CE1CA449CC017124422660);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral19A66527FE8082E019CE1CA449CC017124422660, NULL);
		return (RuntimeObject*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_startBrowse_mD0E8A4954102E9FD2DEC35547E4C48D6C273919C (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B94F7C3D0166AE1EA464CA0E765E32D7E188E5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral7B94F7C3D0166AE1EA464CA0E765E32D7E188E5B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_stopBrowse_mD7714547EAB128F22C2693800986047FEB79C4B7 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF6BEDD0DA5A78F809F2853C168B13CC55ABC647);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralEF6BEDD0DA5A78F809F2853C168B13CC55ABC647, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_connect_mBC00A7EC074E33B8B6ABA87E304A989C979E9A68 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE232AAB75E7BB7A86320DECB5C9B93EA9676CA41);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralE232AAB75E7BB7A86320DECB5C9B93EA9676CA41, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_disconnect_m959852DF91D1DA7B8EDDCEB2FD3B1CF51C9D27BA (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC26A698B4231F574D2B130B4FCD4E3BEA98806EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralC26A698B4231F574D2B130B4FCD4E3BEA98806EF, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_startMirror_m276E9D41E5F0041712335897C626156F44DD2367 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9787BC8806570A4E32BA265F9A5E95BCB1A1433);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteralD9787BC8806570A4E32BA265F9A5E95BCB1A1433, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_stopMirror_m84A5166268AD59A4BD9922B315EAC5D9A56B4F17 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E0935B6618D2DB280DF2E06EBC61738ECFF497E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral8E0935B6618D2DB280DF2E06EBC61738ECFF497E, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge_uninit_m9CB929E08C1F2834608B78210AE3EDF05B6A2508 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02C9C81C6799B36EF416A37206D1D5A254BDCE96);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LeLog_t4A0DFBA534C697E380838BA872CADBD86CCAB152_il2cpp_TypeInfo_var);
		LeLog_Log_mA56BE3D5B2B932F0E3050257AA144689CDE53A49(_stringLiteral02C9C81C6799B36EF416A37206D1D5A254BDCE96, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualNativeBridge__ctor_mD8B4972E9826BDBA326D4A3FEA9169F4D26FD210 (VirtualNativeBridge_t9738A1466DD9EC5ABA8D0C92D248FA9CBA9DA374* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mC7CA174A23290C34424DF6D2733D5E64B92E5977 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____78E9FD91BCE4BFC5388D0AA095E15D9F5467573914EC43B0BBA7BC3CE936B285_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____EE4E5571FFAA403C4BAD502593A970129B135B65A84C12E586B5F39050891269_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)473));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____EE4E5571FFAA403C4BAD502593A970129B135B65A84C12E586B5F39050891269_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)235));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____78E9FD91BCE4BFC5388D0AA095E15D9F5467573914EC43B0BBA7BC3CE936B285_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)11);
		(&V_0)->___TotalTypes = ((int32_t)12);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m3C9D09F94200334DD5FA29A465481C7848AF4549 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC4249931E82CEBAEC1968B680E9E9A0DF4A946C6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_back(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke& marshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_cleanup(MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_com(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_com_back(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com& marshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_com_cleanup(MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
