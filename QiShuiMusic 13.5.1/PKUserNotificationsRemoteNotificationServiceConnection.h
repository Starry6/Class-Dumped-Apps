@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject
@property (nonatomic) NSMutableSet registries;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSObject<OS_dispatch_queue> callOutQueue;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:;
- (id)init;
- (id)bundleIdentifier;
- (id)callOutQueue;
- (void)_queue_remoteUserNotificationPayloadReceived:completionHandler:;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (id)_queue_ensureConnection;
- (void)setCallOutQueue:;
- (id)initWithBundleIdentifier:;
- (void)remoteUserNotificationPayloadReceived:completionHandler:;
- (void)setRegistries:;
- (void)setBundleIdentifier:;
- (void)_invalidate;
- (void)didReceiveDeviceToken:forBundleIdentifier:;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)allowsRemoteNotifications;
- (void)setConnection:;
- (void)registerPushRegistry:completionHandler:;
- (void)setQueue:;
- (id)registries;
- (id)queue;
- (void)unregisterPushRegistry:;
+ (id)sharedInstance;
@end
