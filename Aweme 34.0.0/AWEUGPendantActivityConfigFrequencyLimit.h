@interface AWEUGPendantActivityConfigFrequencyLimit : MTLModel
@property (nonatomic) Q frequencyLimitType;
@property (nonatomic) q daysWindow;
@property (nonatomic) q maxClose;
@property (nonatomic) q daysNoShow;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)frequencyLimitType;
- (long long)daysWindow;
- (long long)daysNoShow;
- (long long)maxClose;
- (void)setFrequencyLimitType:;
- (void)setDaysWindow:;
- (void)setMaxClose:;
- (void)setDaysNoShow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
