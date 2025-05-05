@interface SAPostPersonalDomainActivityNotification : SABaseClientBoundCommand
@property (nonatomic) NSString homeId;
@property (nonatomic) NSString notificationBody;
@property (nonatomic) NSString originatingDeviceName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)originatingDeviceName;
- (BOOL)mutatingCommand;
- (id)homeId;
- (void)setHomeId:;
- (id)notificationBody;
- (void)setNotificationBody:;
- (void)setOriginatingDeviceName:;
@end
