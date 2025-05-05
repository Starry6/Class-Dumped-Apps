@interface UATimer : NSObject
@property (nonatomic) double duration;
@property (nonatomic) @? completeBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> timerQueue;
@property (nonatomic) NSObject<OS_dispatch_source> timerSource;
@property (nonatomic) BOOL isCounting;
- (id)initWithDuration:completeBlock:;
- (id)completeBlock;
- (BOOL)isCounting;
- (void)setCompleteBlock:;
- (void)setIsCounting:;
- (void)invalidateTimer;
- (id)timerSource;
- (void)setTimerSource:;
- (void)stopTimer;
- (void)dealloc;
- (void)startTimer;
- (void)setDuration:;
- (id)timerQueue;
- (void).cxx_destruct;
- (double)duration;
- (void)fire;
- (void)createTimer;
- (void)releaseTimer;
- (void)setTimerQueue:;
@end
