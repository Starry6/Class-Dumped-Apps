@interface SAOnDeviceNotificationsSearchCompleted : SABaseClientBoundCommand
@property (nonatomic) NSArray notifications;
- (id)notifications;
- (id)groupIdentifier;
- (void)setNotifications:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@end
