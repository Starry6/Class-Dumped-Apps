@interface AWECampaignPendantFrequentLimit : MTLModel
@property (nonatomic) q daysWindows;
@property (nonatomic) q showTimesPerDay;
@property (nonatomic) q daysWillNotPresent;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)daysWindows;
- (long long)daysWillNotPresent;
- (void)setDaysWindows:;
- (long long)showTimesPerDay;
- (void)setShowTimesPerDay:;
- (void)setDaysWillNotPresent:;
+ (id)JSONKeyPathsByPropertyKey;
@end
