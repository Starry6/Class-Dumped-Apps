@interface IESLivePEStrategyDataManager : NSObject
@property (nonatomic) NSMutableDictionary strategyModels;
- (void)addStrategyModel:;
- (id)getRelatedStrategyWithFactorKey:;
- (id)getRelatedStrategyWithFactorKeyArray:;
- (id)getStrategyModelWithStrategyKey:;
- (void)setStrategyModels:;
- (id)strategyModels;
- (id)init;
- (void).cxx_destruct;
@end
