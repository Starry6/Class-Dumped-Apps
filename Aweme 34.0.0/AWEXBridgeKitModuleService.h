@interface AWEXBridgeKitModuleService : HTSService
@property (nonatomic) @ disablePanGestureObserver;
@property (nonatomic) AWEXBridgePolicyKitInterceptor policyKitInterceptor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)xBridge:setUpWithContainer:;
- (BOOL)bridgeEngine:shouldUseExternalAuthorizeForCommand:;
- (BOOL)shouldUseExecutor:withMessage:resultHandler:;
- (void)bridgeEngine:message:authorizeMethod:completionHanlder:;
- (BOOL)bridgeEngine:skipMatchBridgeWithMessage:;
- (BOOL)bridgeEngine:shouldUseExternalAuthorizeForMessage:;
- (id)allXBridgeNames;
- (void)setDisablePanGestureObserver:;
- (void)setPolicyKitInterceptor:;
- (id)policyKitInterceptor;
- (id)disablePanGestureObserver;
- (Class)chooseMediaBridgeIMP;
- (id)chooseMediaBridgeInstanceIMP;
- (void)dealloc;
- (void).cxx_destruct;
@end
