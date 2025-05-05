@interface FAPushNotificationHandler : NSObject
- (void)didReceivePushNotificationWithPayload:;
+ (id)sharedHandler;
@end
