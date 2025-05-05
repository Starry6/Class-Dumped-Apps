@interface SAAlarmSleepAlarm : SAAlarmObject
@property (nonatomic) NSNumber bedtimeHour;
@property (nonatomic) NSNumber bedtimeMinute;
@property (nonatomic) NSNumber isFiringNext;
@property (nonatomic) NSNumber isOverride;
- (id)bedtimeMinute;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)bedtimeHour;
- (void)setBedtimeMinute:;
- (void)setBedtimeHour:;
- (id)isFiringNext;
- (void)setIsFiringNext:;
- (id)isOverride;
- (void)setIsOverride:;
+ (id)sleepAlarmWithDictionary:context:;
@end
