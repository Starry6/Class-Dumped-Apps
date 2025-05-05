@interface IESLiveSaaSChargeJSBridgeHandler : NSObject
@property (nonatomic) HTSLiveApi api;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerFetchOrderIdWithBridge:;
- (BOOL)buyProductWithIapID:productID:orderID:extra:withType:bridge:completion:;
- (void)registerChargeWithBridge:;
- (void)registerDiamondListWithBridge:;
- (void)registerFetchRechargeStatus:;
- (void)registerHandlerWithBridge:;
- (void)registerTimeStampWithBridge:;
- (void)trackPaySuccessWithExtra:;
- (void)showToast:;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:;
@end
