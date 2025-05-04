@interface AWEConcernYellowDotDemotionSetting : AWEBaseApiModel
@property (nonatomic) q yellowDotDemotionSwitch;
@property (nonatomic) q followDotDemotionThreshold;
@property (nonatomic) q familiarDotDemotionThreshold;
@property (nonatomic) q yellowDotDemotionMaxTime;
- (long long)followDotDemotionThreshold;
- (long long)familiarDotDemotionThreshold;
- (long long)yellowDotDemotionMaxTime;
- (long long)yellowDotDemotionSwitch;
- (void)setYellowDotDemotionSwitch:;
- (void)setFollowDotDemotionThreshold:;
- (void)setFamiliarDotDemotionThreshold:;
- (void)setYellowDotDemotionMaxTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
