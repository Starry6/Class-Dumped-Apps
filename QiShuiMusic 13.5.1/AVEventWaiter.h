@interface AVEventWaiter : NSObject
- (id)init;
- (void)dealloc;
- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;
@end
