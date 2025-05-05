@interface CJPayTimerManager : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) @? timeOutBlock;
- (void)appendTimeoutBlock:;
- (void)detoryTimer;
- (BOOL)isTimerValid;
- (void)p_timeout;
- (void)setTimeOutBlock:;
- (id)timeOutBlock;
- (void)stopTimer;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)startTimer:;
- (void)createTimer:;
@end
