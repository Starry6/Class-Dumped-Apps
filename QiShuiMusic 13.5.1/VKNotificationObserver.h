@interface VKNotificationObserver : NSObject
- (void)_receivedMemoryNotification;
- (void)dealloc;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedLocalChangedNotification;
- (id)initWithTarget:taskContext:;
- (void).cxx_destruct;
@end
