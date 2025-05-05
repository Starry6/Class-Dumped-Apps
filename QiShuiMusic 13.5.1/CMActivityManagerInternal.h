@interface CMActivityManagerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (void)startActivityUpdatesWithHandlerPrivate:;
- (void)stopActivityUpdatesPrivate;
- (void)overrideOscarSideband:withState:;
- (void)simulateMotionState:withState:;
- (void)simulateMotionStateYouthWithState:;
@end
