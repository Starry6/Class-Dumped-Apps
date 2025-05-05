@interface VCSAlarm : VCSEntity
@property (nonatomic) Q alarmType;
@property (nonatomic) NSString summary;
@property (nonatomic) NSString body;
@property (nonatomic) Q triggerType;
@property (nonatomic) VCSDate triggerDate;
@property (nonatomic) double triggerDuration;
- (id)body;
- (id)triggerDate;
- (id)summary;
- (unsigned long long)triggerType;
- (void).cxx_destruct;
- (unsigned long long)entityType;
- (unsigned long long)alarmType;
- (double)triggerDuration;
- (id)dictify;
- (id)initWithLine:parseState:property:;
- (void)ensureRelativeAlarmWithStartDate:;
+ (id)_componentsWithISO8601DurationString:;
@end
