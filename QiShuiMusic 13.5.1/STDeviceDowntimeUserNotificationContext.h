@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext
@property (nonatomic) NSString localizedUserNotificationBodyKey;
- (id)init;
- (id)destinations;
- (id)notificationBundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)customizeNotificationContent:withCompletionBlock:;
- (void)setEndDateComponents:referenceDate:;
- (void)setEndDateComponents:referenceDate:locale:;
- (id)localizedUserNotificationBodyKey;
- (void)setLocalizedUserNotificationBodyKey:;
+ (BOOL)supportsSecureCoding;
@end
