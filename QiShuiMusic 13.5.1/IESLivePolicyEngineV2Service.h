@interface IESLivePolicyEngineV2Service : IESLivePolicyEngineService
@property (nonatomic) IESLivePEDecisionService decisionService;
@property (nonatomic) BOOL upgradeAllScene;
@property (nonatomic) NSArray useAstSceneList;
@property (nonatomic) NSArray syncSubscribeList;
- (id)decisionService;
- (BOOL)upgradeAllScene;
- (id)useAstSceneList;
- (void)addRoomStrategyWith:;
- (void)addSubscriber:forStrategy:withDefaultFactor:;
- (void)checkStrategy:withDefaultDic:;
- (id)factorValueWithKey:;
- (void)registerStrategyWithJSONDictionary:;
- (void)removeSubscriber:forStrategy:;
- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)setDecisionService:;
- (void)setSyncSubscribeList:;
- (void)setUpgradeAllScene:;
- (void)setUseAstSceneList:;
- (void)setupAstScene;
- (void)strategyFactorChange:withFactorKey:;
- (void)strategyFactorsChange:;
- (id)syncSubscribeList;
- (void).cxx_destruct;
+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:;
@end
