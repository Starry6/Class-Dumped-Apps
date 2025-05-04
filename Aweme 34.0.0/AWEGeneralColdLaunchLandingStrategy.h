@interface AWEGeneralColdLaunchLandingStrategy : NSObject
@property (nonatomic) AWEGeneralColdLaunchLandingConfigModel config;
@property (nonatomic) AWEGeneralColdLaunchLandingFrequencyConfigModel frequencyConfig;
@property (nonatomic) AWEGeneralColdLaunchLandingFrequencyModel frequency;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldAvoidCondition;
- (id)initWithLandingContext:;
- (BOOL)shouldStrategyEffect;
- (void)executeLaunchLandingWithCompletionBlock:;
- (id)frequencyConfig;
- (void)setFrequencyConfig:;
- (void)initFrequency;
- (id)landingFrequencyKey;
- (void)initConfigWithContext:;
- (BOOL)checkFrequency;
- (void)setConfig:;
- (id)config;
- (void)setFrequency:;
- (void).cxx_destruct;
- (id)frequency;
- (void)updateFrequency;
@end
