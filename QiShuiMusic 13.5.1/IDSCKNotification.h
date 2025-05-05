@interface IDSCKNotification : NSObject
@property (nonatomic) q notificationType;
@property (nonatomic) NSString subscriptionID;
- (id)subscriptionID;
- (void).cxx_destruct;
- (long long)notificationType;
+ (id)notificationFromRemoteNotificationDictionary:;
+ (Class)__class;
@end
