@interface IESSaaSTIMGCDTimer : NSObject
@property (nonatomic) double timeInterval;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) @ userInfo;
@property (nonatomic) BOOL repeats;
@property (nonatomic) NSObject<OS_dispatch_queue> privateSerialQueue;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) double tolerance;
- (id)initWithTimeInterval:target:selector:userInfo:repeats:dispatchQueue:;
- (void)resetTimerProperties;
- (void)setPrivateSerialQueue:;
- (void)timerFired;
- (SEL)selector;
- (double)tolerance;
- (id)init;
- (void)setSelector:;
- (void)setRepeats:;
- (void)setTolerance:;
- (void)dealloc;
- (id)userInfo;
- (BOOL)repeats;
- (void)setTimer:;
- (void)setTarget:;
- (void)schedule;
- (void)setTimeInterval:;
- (double)timeInterval;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)target;
- (id)timer;
- (id)description;
- (void)invalidate;
- (void)fire;
- (id)privateSerialQueue;
+ (id)scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:dispatchQueue:;
@end
