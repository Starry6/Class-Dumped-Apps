@interface UIEventEnvironment : NSObject
@property (nonatomic) UIApplication application;
@property (nonatomic) NSMutableArray eventQueue;
- (void)setEventQueue:;
- (id)eventQueue;
- (id)initWithApplication:;
- (void)dealloc;
- (void)sceneDidActivate:;
- (void)pointerLockStateDidChange:;
- (void)setApplication:;
- (void).cxx_destruct;
- (id)_hoverEventForWindow:;
- (void)sceneDidDisconnect:;
- (void)_enqueueHIDEvent:;
- (id)application;
@end
