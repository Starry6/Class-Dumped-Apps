@interface ARRenderSyncScheduler : NSObject
@property (nonatomic) double inputJitterBufferInterval;
@property (nonatomic) q expectedFramesPerSecond;
@property (nonatomic) double vsyncOffset;
@property (nonatomic) BOOL schedulingActive;
@property (nonatomic) Q excessiveCallbackOptions;
- (id)init;
- (void)_callback;
- (void).cxx_destruct;
- (id)initWithExpectedFramesPerSecond:;
- (double)vsyncOffset;
- (void)setVsyncOffset:;
- (long long)expectedFramesPerSecond;
- (void)setExpectedFramesPerSecond:;
- (BOOL)schedulingActive;
- (void)setSchedulingActive:;
- (void)submitBlock:;
- (void)_tryNextBlockWithTotalTried:;
- (unsigned long long)_callbackActionForBlockWithLatency:;
- (double)inputJitterBufferInterval;
- (void)setInputJitterBufferInterval:;
- (unsigned long long)excessiveCallbackOptions;
- (void)setExcessiveCallbackOptions:;
@end
