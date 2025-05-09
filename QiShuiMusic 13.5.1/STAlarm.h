@interface STAlarm : STSiriModelObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) q daysOfWeek;
@property (nonatomic) q hourOfDay;
@property (nonatomic) q minuteOfHour;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL sleepAlarm;
@property (nonatomic) BOOL overrideAlarm;
@property (nonatomic) q bedtimeHour;
@property (nonatomic) q bedtimeMinute;
- (BOOL)isSleepAlarm;
- (long long)bedtimeMinute;
- (long long)hourOfDay;
- (void)setSleepAlarm:;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (void)setHourOfDay:;
- (void)setEnabled:;
- (long long)bedtimeHour;
- (void).cxx_destruct;
- (void)setBedtimeMinute:;
- (void)setBedtimeHour:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (long long)minuteOfHour;
- (void)setMinuteOfHour:;
- (void)setDaysOfWeek:;
- (long long)daysOfWeek;
- (BOOL)isOverrideAlarm;
- (void)setOverrideAlarm:;
+ (BOOL)supportsSecureCoding;
@end
