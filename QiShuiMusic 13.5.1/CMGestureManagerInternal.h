@interface CMGestureManagerInternal : NSObject
- (id)initWithPriority:;
- (void)dealloc;
- (void)stopGestureUpdatesPrivate;
- (void)startGestureUpdatesWithHandlerPrivate:;
@end
