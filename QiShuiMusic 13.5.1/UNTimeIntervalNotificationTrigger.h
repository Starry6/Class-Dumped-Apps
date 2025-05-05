@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger
@property (nonatomic) double timeInterval;
- (id)nextTriggerDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (double)timeInterval;
- (id)description;
- (BOOL)isEqual:;
- (id)nextTriggerDateAfterDate:withRequestedDate:;
- (id)_initWithTimeInterval:repeats:;
+ (BOOL)supportsSecureCoding;
+ (id)triggerWithTimeInterval:repeats:;
@end
