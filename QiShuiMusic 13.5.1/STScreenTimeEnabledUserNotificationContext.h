@interface STScreenTimeEnabledUserNotificationContext : STUserNotificationContext
- (id)init;
- (id)notificationBundleIdentifier;
- (id)initWithCoder:;
- (void)customizeNotificationContent:withCompletionBlock:;
+ (BOOL)supportsSecureCoding;
@end
