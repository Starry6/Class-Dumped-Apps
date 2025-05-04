@interface AWEGrouponLifeFeedsLynxDelayCheckSizeTask : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL firing;
@property (nonatomic) BOOL hasNewOne;
@property (nonatomic) @? callback;
- (void)setHasNewOne:;
- (void)delayHeightCheckTimerAction;
- (BOOL)hasNewOne;
- (void)fireWithInterval:callback:;
- (void)appendNewOne;
- (void)setCallback:;
- (id)callback;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void)setFiring:;
- (void).cxx_destruct;
- (BOOL)firing;
- (void)stopTask;
@end
