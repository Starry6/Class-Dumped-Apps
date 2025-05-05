@interface TMBPEACollectionErrorStrategy : NSObject
@property (nonatomic) NSDictionary config;
@property (nonatomic) NSDictionary strategyDict;
- (void)setStrategyDict:;
- (void)setupWithPresetConfig:;
- (id)strategyDict;
- (void)updateConfig:;
- (void)setConfig:;
- (void)setup;
- (void).cxx_destruct;
- (id)config;
- (id)space;
+ (id)defaultErrorStrategyConfig;
+ (id)unitErrors;
@end
