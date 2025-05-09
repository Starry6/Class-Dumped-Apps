@interface AWEFeedScrollingTimeCostModel : NSObject
@property (nonatomic) double totalDuration;
@property (nonatomic) double pauseDuration;
@property (nonatomic) double trackPlayTimeDuration;
@property (nonatomic) double trackVideoPlayActionDuration;
@property (nonatomic) double playerDidChangePlaybackStatePauseDuration;
@property (nonatomic) double playerDidChangePlaybackStateStartDuration;
@property (nonatomic) double realPauseDuration;
@property (nonatomic) double playDuration;
@property (nonatomic) double realPlayDuration;
@property (nonatomic) double prepareToPlayDuration;
@property (nonatomic) double willDisplayDuration;
@property (nonatomic) double willDisplayCellDuration;
@property (nonatomic) double didEndDisplayingCellDuration;
@property (nonatomic) double prepareForDisplayDuration;
@property (nonatomic) double prepareForDisplayWithoutCoverImageDuration;
@property (nonatomic) double preloadCellDuration;
@property (nonatomic) double scrollViewBeginDraggingDuration;
- (void)setPlayDuration:;
- (void)setRealPlayDuration:;
- (void)setPrepareForDisplayWithoutCoverImageDuration:;
- (void)setPreloadCellDuration:;
- (void)setWillDisplayCellDuration:;
- (void)setWillDisplayDuration:;
- (void)setPrepareForDisplayDuration:;
- (void)setDidEndDisplayingCellDuration:;
- (void)setScrollViewBeginDraggingDuration:;
- (double)trackPlayTimeDuration;
- (void)setTrackPlayTimeDuration:;
- (double)trackVideoPlayActionDuration;
- (void)setTrackVideoPlayActionDuration:;
- (double)playerDidChangePlaybackStatePauseDuration;
- (void)setPlayerDidChangePlaybackStatePauseDuration:;
- (double)playerDidChangePlaybackStateStartDuration;
- (void)setPlayerDidChangePlaybackStateStartDuration:;
- (double)realPauseDuration;
- (void)setRealPauseDuration:;
- (double)realPlayDuration;
- (double)prepareToPlayDuration;
- (void)setPrepareToPlayDuration:;
- (double)willDisplayDuration;
- (double)willDisplayCellDuration;
- (double)didEndDisplayingCellDuration;
- (double)prepareForDisplayDuration;
- (double)prepareForDisplayWithoutCoverImageDuration;
- (double)preloadCellDuration;
- (double)scrollViewBeginDraggingDuration;
- (double)totalDuration;
- (double)pauseDuration;
- (void)setPauseDuration:;
- (double)playDuration;
- (void)setTotalDuration:;
@end
