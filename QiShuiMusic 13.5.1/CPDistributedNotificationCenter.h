@interface CPDistributedNotificationCenter : NSObject
- (void)deliverNotification:userInfo:;
- (void)dealloc;
- (void)_receivedCheckIn:auditToken:;
- (void)runServer;
- (void)postNotificationName:;
- (void)runServerOnCurrentThread;
- (void)postNotificationName:userInfo:;
- (void)stopDeliveringNotifications;
- (void)_createReceiveSourceForRunLoop:;
- (void)startDeliveringNotificationsToMainThread;
- (BOOL)postNotificationName:userInfo:toBundleIdentifier:;
- (id)name;
- (void)_notificationServerWasRestarted;
- (void)_checkIn;
- (void)_checkOutAndRemoveSource;
- (id)_initWithServerName:;
- (void)startDeliveringNotificationsToRunLoop:;
+ (id)centerNamed:;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (void)setCenter:forServerPort:;
+ (id)centerForServerPort:;
+ (id)_serverPortToNotificationCenterMap;
@end
