@interface SAUIPerformNotificationAction : SABaseClientBoundCommand
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSString actionTitle;
@property (nonatomic) NSString notificationIdentifier;
- (id)groupIdentifier;
- (id)actionTitle;
- (BOOL)requiresResponse;
- (void)setActionTitle:;
- (id)encodedClassName;
- (id)actionIdentifier;
- (void)setNotificationIdentifier:;
- (id)notificationIdentifier;
- (void)setActionIdentifier:;
@end
