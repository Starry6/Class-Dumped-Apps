@interface AWETaskSpreadScheduler : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) BOOL running;
@property (nonatomic) NSMutableArray dispatchers;
- (void)__setupTimer;
- (void)registTaskDispatcher:;
- (void)setDispatchers:;
- (id)dispatchers;
- (void)__configIdleObserverOnDispatcher:;
- (void)__loop;
- (void)__excuteDispatcherTask;
- (void)__fallIntoSleepIfNeeded;
- (void)unregistTaskDispatcher:;
- (void)setRunning:;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)isRunning;
- (void)wakeup;
- (void)sleep;
+ (id)mainScheduler;
@end
