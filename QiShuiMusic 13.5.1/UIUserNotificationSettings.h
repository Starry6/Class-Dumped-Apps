@interface UIUserNotificationSettings : NSObject
@property (nonatomic) Q types;
@property (nonatomic) NSSet categories;
- (unsigned long long)types;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)categories;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)validatedSettings;
- (id)initWithUserNotificationTypes:userNotificationActionSettings:;
- (id)initWithTypes:categories:;
- (BOOL)mayPresentUserNotificationOfType:;
- (unsigned long long)allowedUserNotificationTypes;
- (id)userNotificationActionSettings;
+ (BOOL)supportsSecureCoding;
+ (id)settingsForUserNotificationTypes:userNotificationActionSettings:;
+ (id)settingsForTypes:categories:;
+ (id)settingsForRegisteredSettings:requestedSettings:;
@end
