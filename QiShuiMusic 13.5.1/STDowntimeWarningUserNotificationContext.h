@interface STDowntimeWarningUserNotificationContext : STUserNotificationContext
- (id)init;
- (id)initWithCoder:;
- (void)customizeNotificationContent:withCompletionBlock:;
- (void)setTimeLeft:;
+ (BOOL)supportsSecureCoding;
@end
