@interface AWEIMChatListUpdateDebounceThrottle : NSObject
@property (nonatomic) double interval;
@property (nonatomic) double maxThresholdInterval;
@property (nonatomic) @? debounceBlock;
@property (nonatomic) @? throttleBlock;
@property (nonatomic) Q executeCount;
- (unsigned long long)executeCount;
- (void)setExecuteCount:;
- (id)initWithInterval:maxThresholdInterval:;
- (void)__debounceThrottle:;
- (id)throttleBlock;
- (void)setThrottleBlock:;
- (double)maxThresholdInterval;
- (void)setMaxThresholdInterval:;
- (double)interval;
- (void)setInterval:;
- (void)execute:;
- (void)resetAll;
- (void).cxx_destruct;
- (id)debounceBlock;
- (void)setDebounceBlock:;
@end
