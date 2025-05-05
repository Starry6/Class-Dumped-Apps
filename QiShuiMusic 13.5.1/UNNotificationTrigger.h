@interface UNNotificationTrigger : NSObject
@property (nonatomic) BOOL repeats;
- (id)init;
- (BOOL)repeats;
- (id)nextTriggerDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)_init;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithRepeats:;
- (id)nextTriggerDateAfterLastTriggerDate:withRequestedDate:;
- (id)nextTriggerDateAfterDate:withRequestedDate:;
- (BOOL)willTriggerAfterDate:withRequestedDate:;
- (double)_retroactiveTriggerHysteresis;
+ (BOOL)supportsSecureCoding;
@end
