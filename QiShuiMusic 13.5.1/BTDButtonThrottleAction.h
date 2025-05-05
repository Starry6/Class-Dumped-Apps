@interface BTDButtonThrottleAction : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : action;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) double throttleThreshold;
@property (nonatomic) Q events;
- (double)lastRequestTime;
- (void)btd_invokeAction:controlEvent:;
- (id)initWithTarget:action:throttleThreshold:controlEvents:;
- (void)setLastRequestTime:;
- (void)setThrottleThreshold:;
- (double)throttleThreshold;
- (SEL)action;
- (void)setAction:;
- (void)setTarget:;
- (void)setEvents:;
- (void).cxx_destruct;
- (unsigned long long)events;
- (id)target;
@end
