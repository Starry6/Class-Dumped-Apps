@interface AWEPerfLoadVideo : AWEPerfLoadObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewInfoDidUpdate:;
- (void)finishRunning;
- (void)perf_isa_videoEngineReadyToPlay:;
- (void)perf_isa_videoEngineDidFinish:error:;
- (void)perf_isa_videoEngineDidFinish:videoStatusException:;
- (void)perf_isa_videoEngine:playbackStateDidChanged:;
- (void)perf_isa_readyForDisplayForURL:metaFormat:;
- (void)perf_isa_playbackDidFailForURL:error:;
- (void)perf_isa_playbackDidFailWithErrorDict:;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)notifyFirstFrameWithStatus:;
+ (BOOL)isRunning;
@end
