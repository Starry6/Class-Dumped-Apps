@interface BNPlaying.BNPlayModule : NSObject
- (void)eventManagerDidUpdate:;
- (void)eventManagerDidUpdateV2:eventName:params:;
- (void)receiveNotificationWithNotification:;
- (id)init;
- (void).cxx_destruct;
@end
