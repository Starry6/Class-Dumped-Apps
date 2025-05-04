@interface AWEOpenPlatformAuthIdentityConfiguration : NSObject
@property (nonatomic) AWEOpenPlatformAuthFlowManager flowManager;
@property (nonatomic) NSArray scopeItems;
@property (nonatomic) <AWEOpenAuthInfoScopeLevelItemDataProtocol> scopeModel;
@property (nonatomic) Q scopeType;
@property (nonatomic) BDPlatformAuthParamsModel authParamsModel;
@property (nonatomic) Q authScene;
@property (nonatomic) @? bridgeAuthCompletionBlock;
- (unsigned long long)authScene;
- (void)setAuthScene:;
- (id)scopeItems;
- (void)setScopeItems:;
- (id)scopeModel;
- (void)setScopeModel:;
- (id)authParamsModel;
- (void)setAuthParamsModel:;
- (id)bridgeAuthCompletionBlock;
- (void)setBridgeAuthCompletionBlock:;
- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (void)setFlowManager:;
- (id)flowManager;
- (void)setScopeType:;
@end
