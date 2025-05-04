@interface AWESwitchNetPrepareMonitor : NSObject
@property (nonatomic) q prepareButNotRenderCount;
@property (nonatomic) double lastRenderTime;
@property (nonatomic) <AWESwitchNetLongBlockProtocol> delegate;
- (void)setLastRenderTime:;
- (void)resetPlayPrepare;
- (void)onPlayPrepare:;
- (void)setPrepareButNotRenderCount:;
- (long long)prepareButNotRenderCount;
- (void)onPrepareBlock;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)lastRenderTime;
@end
