@interface ICBackoffTimer : NSObject
@property (nonatomic) double initialTimeInterval;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) @ userInfo;
@property (nonatomic) Q backoffCount;
@property (nonatomic) double maxTimeInterval;
@property (nonatomic) NSTimer timer;
- (SEL)selector;
- (id)init;
- (void)setSelector:;
- (void)dealloc;
- (void)fire:;
- (id)userInfo;
- (BOOL)isScheduled;
- (void)setTimer:;
- (void)setTarget:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)target;
- (id)timer;
- (void)invalidate;
- (void)fire;
- (double)nextTimeInterval;
- (id)initWithInitialInterval:maxInterval:target:selector:userInfo:;
- (void)scheduleToFire;
- (double)initialTimeInterval;
- (void)setInitialTimeInterval:;
- (unsigned long long)backoffCount;
- (void)setBackoffCount:;
- (double)maxTimeInterval;
- (void)setMaxTimeInterval:;
@end
