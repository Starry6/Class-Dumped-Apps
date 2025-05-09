@interface IESECGCDTimer : NSObject
@property (nonatomic) double timeInterval;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) @ userInfo;
@property (nonatomic) BOOL repeats;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? block;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
- (id)initWithTimeInterval:queue:repeats:block:;
- (id)initWithTimeInterval:target:selector:userInfo:repeats:dispatchQueue:;
- (id)realTimer;
- (void)timerFired;
- (SEL)selector;
- (id)block;
- (void)setSelector:;
- (void)setRepeats:;
- (void)dealloc;
- (id)userInfo;
- (BOOL)repeats;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)suspend;
- (void)setTimer:;
- (void)setTarget:;
- (void)schedule;
- (void)setTimeInterval:;
- (double)timeInterval;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)target;
- (id)timer;
- (void)setBlock:;
- (void)invalidate;
- (void)fire;
+ (id)scheduledTimerWithTimeInterval:queue:repeats:block:;
+ (id)scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:dispatchQueue:;
@end
