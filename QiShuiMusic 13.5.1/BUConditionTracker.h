@interface BUConditionTracker : NSObject
@property (nonatomic) @? condition;
@property (nonatomic) @? action;
@property (nonatomic) q retryCount;
@property (nonatomic) NSTimer timer;
- (void)_invokeTrack;
- (id)initWithConditon:action:retryCount:;
- (id)condition;
- (void)setCondition:;
- (void)start;
- (void)stop;
- (id)action;
- (void)setRetryCount:;
- (void)setAction:;
- (void)setTimer:;
- (long long)retryCount;
- (void).cxx_destruct;
- (id)timer;
@end
