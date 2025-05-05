@interface WRMClientInterface : NSObject
- (id)init;
- (void)unregisterClient;
- (void)registerClient:queue:notificationHandler:;
- (void).cxx_destruct;
- (void)unregisterClientWithNotificationBlockRelease;
@end
