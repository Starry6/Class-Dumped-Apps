@interface SAUIPlayNotificationSound : SABaseClientBoundCommand
@property (nonatomic) NSString notificationId;
@property (nonatomic) NSString notificationType;
- (id)groupIdentifier;
- (void)setNotificationId:;
- (BOOL)requiresResponse;
- (id)notificationId;
- (id)encodedClassName;
- (id)notificationType;
- (void)setNotificationType:;
+ (id)playNotificationSound;
+ (id)playNotificationSoundWithDictionary:context:;
@end
