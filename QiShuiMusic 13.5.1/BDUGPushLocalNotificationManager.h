@interface BDUGPushLocalNotificationManager : NSObject
- (void)sendLocalNotificationWithPushPayload:content:completionHandler:;
- (unsigned long long)bd_getNotificationInterruptionLevelWithLevel:;
- (id)bd_getNotificationSoundWithSoundName:;
- (void)sendLocalNotificationAfterIOS10WithPushPayload:completionHandler:;
- (void)sendLocalNotificationBeforeIOS10WithPushPayload:;
- (void)sendLocalNotificationWithContent:identifier:completionHandler:;
- (void)sendLocalNotificationWithPushPayload:;
- (void)sendLocalNotificationWithPushPayload:completionHandler:;
+ (id)sharedInstance;
@end
