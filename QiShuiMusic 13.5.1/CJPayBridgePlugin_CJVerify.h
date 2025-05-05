@interface CJPayBridgePlugin_CJVerify : TTBridgePlugin
@property (nonatomic) CJPayHalfScreenSMSVerificationViewController verifyVC;
- (void)CJVerifyNotifyWithParam:callback:engine:controller:;
- (void)CJVerifyWithParam:callback:engine:controller:;
- (void)p_callJSEvent:;
- (id)p_presenter;
- (void)p_sendMessage:type:data:;
- (id)p_verifyVCFromModel:;
- (void)setVerifyVC:;
- (id)verifyVC;
- (void).cxx_destruct;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
