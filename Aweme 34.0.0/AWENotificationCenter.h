@interface AWENotificationCenter : NSNotificationCenter
- (void)postNotification:;
- (void)postNotificationName:object:;
- (void)postNotificationName:object:userInfo:;
@end
