@interface SANotificationsSearch : SABaseClientBoundCommand
@property (nonatomic) NSString afterNotificationId;
@property (nonatomic) NSNumber isOnDeviceSearch;
@property (nonatomic) NSString priority;
@property (nonatomic) NSString sourceAppId;
@property (nonatomic) NSNumber supportsSpokenNotifications;
- (void)setPriority:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)priority;
- (id)sourceAppId;
- (void)setSourceAppId:;
- (id)afterNotificationId;
- (void)setAfterNotificationId:;
- (id)isOnDeviceSearch;
- (void)setIsOnDeviceSearch:;
- (id)supportsSpokenNotifications;
- (void)setSupportsSpokenNotifications:;
+ (id)notificationsSearch;
+ (id)notificationsSearchWithDictionary:context:;
@end
