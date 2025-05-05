@interface CLRunLoopTimerScheduler : NSObject
@property (nonatomic) NSTimer underlyingTimer;
@property (nonatomic) @? fireBlock;
@property (nonatomic) NSRunLoop runloop;
@property (nonatomic) CLTimer timer;
- (id)runloop;
- (void)dealloc;
- (void)setTimer:;
- (id)fireBlock;
- (void)setRunloop:;
- (void)reflectNextFireDelay:fireInterval:;
- (void).cxx_destruct;
- (id)timer;
- (void)setFireBlock:;
- (id)initWithRunLoopSilo:;
- (id)underlyingTimer;
- (void)setUnderlyingTimer:;
@end
