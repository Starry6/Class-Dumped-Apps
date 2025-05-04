@interface AWEGeneralColdLaunchLandingFrequencyConfigModel : MTLModel
@property (nonatomic) q period;
@property (nonatomic) q limitLandingCountsInPeriod;
@property (nonatomic) q limitLandingCountsInAll;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)limitLandingCountsInPeriod;
- (void)setLimitLandingCountsInPeriod:;
- (long long)limitLandingCountsInAll;
- (void)setLimitLandingCountsInAll:;
- (long long)period;
- (void)setPeriod:;
+ (id)JSONKeyPathsByPropertyKey;
@end
