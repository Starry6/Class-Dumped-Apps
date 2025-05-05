@interface IESLiveSaaSCJPayJSBridgeHandler : NSObject
@property (nonatomic) <IESLiveSaaSCJPayService> cjpayService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerDeleteCouponWithBridge:;
- (id)cjpayService;
- (void)registerAuthYapilaWithBridge:;
- (void)registerCJPayAuthWithBridge:;
- (void)registerCJPayH5DeskWithBridge:;
- (void)registerHandlerWithBridge:;
- (void)registerTTPayWithBridge:;
- (void)setCjpayService:;
- (void).cxx_destruct;
@end
