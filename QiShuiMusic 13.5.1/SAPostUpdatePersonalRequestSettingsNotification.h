@interface SAPostUpdatePersonalRequestSettingsNotification : SABaseClientBoundCommand
@property (nonatomic) NSString homeId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)homeId;
- (void)setHomeId:;
@end
