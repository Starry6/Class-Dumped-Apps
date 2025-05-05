@interface CSJDynamicRenderTimeOutControlServer : NSObject
@property (nonatomic) double delayTime;
@property (nonatomic) double timeout;
@property (nonatomic) BUTimer renderTimer;
@property (nonatomic) BOOL hasRenderFinish;
- (BOOL)hasRenderFinish;
- (void)setRenderTimer:;
- (void)delayRender:;
- (id)renderTimer;
- (void)setHasRenderFinish:;
- (void)startRenderWithDelayTime:delayRender:;
- (void)setTimeout:;
- (void)setDelayTime:;
- (void).cxx_destruct;
- (double)timeout;
- (double)delayTime;
@end
