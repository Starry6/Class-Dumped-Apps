@interface BXStrategyBuilderOC : NSObject
@property (nonatomic) BXStrategySettingsOC strategySettings;
- (id)buildAccessKey:;
- (id)buildSecretKey:;
- (id)buildByteBenchId:;
- (id)buildClientInfoDic:;
- (id)buildOpenRealTimeDecision:;
- (id)buildTryCount:;
- (id)buildUpdataInterval:;
- (void)setStrategySettings:;
- (id)strategySettings;
- (id)init;
- (id)build;
- (void).cxx_destruct;
@end
