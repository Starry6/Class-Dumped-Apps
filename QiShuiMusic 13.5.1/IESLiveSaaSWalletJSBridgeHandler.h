@interface IESLiveSaaSWalletJSBridgeHandler : NSObject
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerRedeemDialogWithBridge:;
- (long long)showRedeemAlertFromTypeFromTag:;
- (void)registerHandlerWithBridge:;
@end
