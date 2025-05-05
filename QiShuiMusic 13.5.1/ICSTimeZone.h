@interface ICSTimeZone : ICSComponent
@property (nonatomic) NSString tzid;
- (void).cxx_destruct;
- (id)systemTimeZoneForDate:;
- (id)tzid;
- (void)setTzid:;
- (id)initWithSystemTimeZone:fromDate:options:;
- (id)initWithSystemTimeZone:;
- (id)initWithTimeZone:fromDate:options:;
- (id)_previousDSTTransitionForDate:timezone:;
- (BOOL)isEqualToNSTimeZone:forDate:;
- (id)getNSTimeZoneFromDate:toDate:;
- (id)getNSTimeZone:;
- (id)computeTimeZoneChangeListFromDate:toDate:;
+ (id)name;
+ (id)blocksAfterDate:untilDate:forTimeZone:;
+ (BOOL)_isTimeZone:pseudoDSTForDate:;
+ (id)timeZoneWithSystemTimeZoneName:;
+ (id)quickTimeZoneNames;
+ (id)slowTimeZoneNames;
+ (BOOL)perfectMatchForSubarray:inTZChangeArray:;
+ (long long)matchTypeForSubarray:inTZChangeArray:;
@end
