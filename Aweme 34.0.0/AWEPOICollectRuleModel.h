@interface AWEPOICollectRuleModel : MTLModel
@property (nonatomic) q maxFrequencyPerDay;
@property (nonatomic) q maxContinuousShowWithoutCollect;
@property (nonatomic) q maxDisableDay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)maxFrequencyPerDay;
- (void)setMaxFrequencyPerDay:;
- (long long)maxContinuousShowWithoutCollect;
- (void)setMaxContinuousShowWithoutCollect:;
- (long long)maxDisableDay;
- (void)setMaxDisableDay:;
+ (id)JSONKeyPathsByPropertyKey;
@end
