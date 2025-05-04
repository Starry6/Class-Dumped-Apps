@interface AWEHPLandingManager : NSObject
@property (nonatomic) NSMutableArray effectStrategies;
@property (nonatomic) AWEHPLandingStrategyRegisterList registerList;
- (id)registerList;
- (void)setRegisterList:;
- (void)executeLaunchLandingStrategyWithContext:;
- (void)p_trackLandingResultWithStatus:error:result:extra:;
- (BOOL)p_executeLaunchLandingStrategyWithContext:resultModel:strategyMap:registerMap:;
- (BOOL)p_checkStrategy:registerModel:strategyConfig:context:landingResult:;
- (BOOL)p_executeLaunchLandingStrategyWithContext:resultModel:strategyModel:registerModel:;
- (id)p_generateStrategyAbilityImplWithContext:;
- (void)p_beginLandingWithStrategy:;
- (void)p_endLandingWithStrategy:resultModel:strategyModel:succeed:;
- (id)effectStrategies;
- (void)setEffectStrategies:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
