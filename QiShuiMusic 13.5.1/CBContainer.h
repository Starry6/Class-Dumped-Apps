@interface CBContainer : NSObject
- (void)dealloc;
- (void)registerNotificationBlock:;
- (void)unregisterNotificationBlock;
- (void)scheduleWithDispatchQueue:;
- (void)unscheduleWithDispatchQueue:;
@end
