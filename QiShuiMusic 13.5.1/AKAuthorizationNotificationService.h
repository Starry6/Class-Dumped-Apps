@interface AKAuthorizationNotificationService : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:;
- (void)startWithNotificationHandler:completion:;
- (void)startWithStateBroadcastHandler:completion:;
- (void)_configureNotificationServiceWithCompletion:;
- (void)_configureStateBroadcastServiceWithCompletion:;
+ (id)_sharedService;
+ (void)startServiceWithNotificationHandler:;
+ (void)startServiceWithStateBroadcastHandler:;
@end
