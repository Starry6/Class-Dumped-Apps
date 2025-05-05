@interface UNLocationNotificationTrigger : UNNotificationTrigger
@property (nonatomic) CLRegion region;
- (id)region;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)willTriggerAfterDate:withRequestedDate:;
- (id)_initWithRegion:repeats:;
+ (BOOL)supportsSecureCoding;
+ (id)triggerWithRegion:repeats:;
@end
