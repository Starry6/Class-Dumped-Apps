@interface SSRemoteNotificationClient : NSObject
- (id)init;
- (void)dealloc;
- (void)registerForRemoteNotifications;
- (void)unregisterForRemoteNotifications;
- (id)popQueuedNotifications;
+ (id)sharedClient;
@end
