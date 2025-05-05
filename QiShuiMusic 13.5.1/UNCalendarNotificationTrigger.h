@interface UNCalendarNotificationTrigger : UNNotificationTrigger
@property (nonatomic) NSDateComponents dateComponents;
- (id)dateComponents;
- (id)nextTriggerDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)nextTriggerDateAfterDate:withRequestedDate:;
- (id)_initWithDateComponents:repeats:;
+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:repeats:;
@end
