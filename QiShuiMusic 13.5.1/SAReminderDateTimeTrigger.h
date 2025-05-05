@interface SAReminderDateTimeTrigger : SAReminderTrigger
@property (nonatomic) NSDate date;
@property (nonatomic) SAReminderDateTimeTriggerOffset offset;
@property (nonatomic) SAReminderDateTimeTriggerOffset relativeTimeOffset;
@property (nonatomic) NSString timeZoneId;
- (void)setOffset:;
- (id)groupIdentifier;
- (void)setTimeZoneId:;
- (id)offset;
- (id)date;
- (id)timeZoneId;
- (id)encodedClassName;
- (void)setDate:;
- (id)relativeTimeOffset;
- (void)setRelativeTimeOffset:;
+ (id)dateTimeTrigger;
+ (id)dateTimeTriggerWithDictionary:context:;
@end
