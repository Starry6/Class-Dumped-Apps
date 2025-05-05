@interface AAAccountUserNotificationPublisher : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:;
- (void)postAccountUserNotificationWith:completion:;
@end
