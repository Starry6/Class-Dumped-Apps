@interface AWELandscapeSplitScreenMonitor : NSObject
@property (nonatomic) double beginRenderTime;
@property (nonatomic) double beginRenderCellCoverTime;
@property (nonatomic) double beginEnterTime;
@property (nonatomic) BOOL shouldMonitor;
- (void)trackRenderPhase:splitScreenMode:success:;
- (double)beginEnterTime;
- (void)setBeginRenderTime:;
- (double)beginRenderTime;
- (void)setBeginRenderCellCoverTime:;
- (double)beginRenderCellCoverTime;
- (void)setBeginEnterTime:;
- (void)reset;
- (BOOL)shouldMonitor;
- (void)setShouldMonitor:;
@end
