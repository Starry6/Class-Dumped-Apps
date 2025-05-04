@interface AWEPayJsBridgeService : HTSService
@property (nonatomic) @? alipayCallback;
@property (nonatomic) @? wxpayCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)payWithAlipay:completion:;
- (void)payWithWeChatPay:completion:;
- (void)launchMiniProgramWithWechat:completion:;
- (void)preparePayWithOrderID:completion:;
- (BOOL)handleAppOpenUrl:;
- (BOOL)handleAppContinueUserActivity:;
- (id)aAWEECModuleServiceDOUYINLiteAdaper;
- (id)aAWEECModuleServiceDOUYINHTSAdaper;
- (void)weChatOnResponse:;
- (void)setWxpayCallback:;
- (id)wxpayCallback;
- (id)alipayCallback;
- (void)setAlipayCallback:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (Class)aAWEECModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEECModuleServiceDOUYINHTSAdaperClass;
@end
