@interface BTDGestureThrottleAction : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : action;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) double throttleThreshold;
- (double)lastRequestTime;
- (void)btd_invokeWithRecognizer:;
- (id)initWithTarget:action:throttleThreshold:;
- (void)setLastRequestTime:;
- (void)setThrottleThreshold:;
- (double)throttleThreshold;
- (SEL)action;
- (void)setAction:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
@end
