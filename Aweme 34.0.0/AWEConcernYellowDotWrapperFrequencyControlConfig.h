@interface AWEConcernYellowDotWrapperFrequencyControlConfig : NSObject
@property (nonatomic) q groupID;
@property (nonatomic) AWEConcernYellowDotNoClickFrequencyConfig noClickFrequency;
@property (nonatomic) AWEConcernYellowDotMaxCountMinIntervalFrequencyConfig maxCountMinIntervalFrequency;
@property (nonatomic) AWEConcernYellowDotNaturalDayCountFrequencyConfig naturalDayCountFrequency;
- (id)configWithGroupID:;
- (id)noClickFrequency;
- (id)maxCountMinIntervalFrequency;
- (id)naturalDayCountFrequency;
- (id)findConfigWithGroupID:;
- (void)setNoClickFrequency:;
- (void)setMaxCountMinIntervalFrequency:;
- (void)setNaturalDayCountFrequency:;
- (void)setGroupID:;
- (id)init;
- (long long)groupID;
- (void).cxx_destruct;
@end
