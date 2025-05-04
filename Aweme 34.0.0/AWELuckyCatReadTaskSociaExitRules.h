@interface AWELuckyCatReadTaskSociaExitRules : MTLModel
@property (nonatomic) q ineffectiveDisplayDays;
@property (nonatomic) q displayDaysCoolDownHours;
@property (nonatomic) q ineffectiveDisplayTimes;
@property (nonatomic) q displayTimesCoolDownHours;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)ineffectiveDisplayDays;
- (void)setIneffectiveDisplayDays:;
- (long long)displayDaysCoolDownHours;
- (void)setDisplayDaysCoolDownHours:;
- (long long)ineffectiveDisplayTimes;
- (void)setIneffectiveDisplayTimes:;
- (long long)displayTimesCoolDownHours;
- (void)setDisplayTimesCoolDownHours:;
+ (id)JSONKeyPathsByPropertyKey;
@end
