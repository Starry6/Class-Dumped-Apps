@interface AWEConcernYellowDotRequestOptimizeStrategyModel : AWEBaseApiModel
@property (nonatomic) q switchOff;
@property (nonatomic) q highValueBadgeExist;
@property (nonatomic) q frequencyControl;
@property (nonatomic) q inHomepageFollow;
- (long long)frequencyControl;
- (void)setFrequencyControl:;
- (long long)switchOff;
- (void)setSwitchOff:;
- (long long)highValueBadgeExist;
- (void)setHighValueBadgeExist:;
- (long long)inHomepageFollow;
- (void)setInHomepageFollow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
