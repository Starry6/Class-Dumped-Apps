@interface STAppLimitWarningUserNotificationContext : STUserNotificationContext
- (void)customizeNotificationContent:withCompletionBlock:;
- (void)setLimitDisplayName:timeLeft:;
+ (BOOL)supportsSecureCoding;
@end
