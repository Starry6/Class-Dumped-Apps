@interface AWEOpenPlatformHalfAuthNavigationController : UINavigationController
@property (nonatomic) AWEOpenPlatformAuthFlowManager flowManager;
@property (nonatomic) @? bridgeAuthCompletionBlock;
@property (nonatomic) NSArray currentNormalScopeItems;
@property (nonatomic) BOOL autoPushNext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)authNextStep:;
- (void)authorizeComplated:error:;
- (void)cancelAuthorizeError:;
- (id)bridgeAuthCompletionBlock;
- (void)setBridgeAuthCompletionBlock:;
- (id)currentNormalScopeItems;
- (void)setCurrentNormalScopeItems:;
- (BOOL)autoPushNext;
- (void)setAutoPushNext:;
- (void)pushViewController:animated:;
- (void).cxx_destruct;
- (void)navigationController:didShowViewController:animated:;
- (void)setFlowManager:;
- (id)flowManager;
- (id)initWithFlowManager:;
@end
