@interface AWEIMEnterpriseModeGuideFrequencyConfig : MTLModel
@property (nonatomic) q intervalHours;
@property (nonatomic) q maxShownTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIntervalHours:;
- (long long)intervalHours;
- (long long)maxShownTimes;
- (void)setMaxShownTimes:;
+ (id)JSONKeyPathsByPropertyKey;
@end
