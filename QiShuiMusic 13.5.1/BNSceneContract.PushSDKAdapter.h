@interface BNSceneContract.PushSDKAdapter : NSObject
- (void)bdug_handleLocalNotification:;
- (void)bdug_handleRemoteNotification:withCompletionHandler:;
- (void)bdug_pushDidGrantedNotification:;
- (id)init;
- (void)applicationDidBecomeActive;
- (void).cxx_destruct;
@end
