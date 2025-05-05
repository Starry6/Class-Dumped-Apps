@interface IESECFPSMonitorWrapper : IESECHMDMonitorWrapper
@property (nonatomic) @? callback;
@property (nonatomic) q totalFrames;
@property (nonatomic) q count;
- (void)setTotalFrames:;
- (id)callback;
- (void)setCount:;
- (void)setCallback:;
- (id)init;
- (void).cxx_destruct;
- (long long)count;
- (long long)totalFrames;
@end
