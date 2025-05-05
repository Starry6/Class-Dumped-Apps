@interface STUserNotificationContext : NSObject
@property (nonatomic) NSNumber destinations;
@property (nonatomic) NSString notificationBundleIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray localizedUserNotificationBodyArguments;
@property (nonatomic) UNNotificationTrigger trigger;
- (id)init;
- (id)destinations;
- (id)identifier;
- (id)notificationBundleIdentifier;
- (void)setTrigger:;
- (id)initWithCoder:;
- (id)trigger;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
- (void)customizeNotificationContent:withCompletionBlock:;
- (void)notificationContentWithCompletionBlock:;
- (id)localizedUserNotificationBodyArguments;
- (void)setLocalizedUserNotificationBodyArguments:;
+ (BOOL)supportsSecureCoding;
@end
