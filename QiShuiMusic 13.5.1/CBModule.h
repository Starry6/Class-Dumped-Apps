@interface CBModule : NSObject
- (void)dealloc;
- (void)registerNotificationBlock:;
- (void)unregisterNotificationBlock;
- (id)initWithQueue:;
@end
