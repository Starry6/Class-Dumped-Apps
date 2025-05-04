@interface AWETimingCloseOnPlayAndMonitorHandler : AWEOnPlayAndMonitorBaseHandler
@property (nonatomic) BOOL needShowAlert;
@property (nonatomic) BOOL isEnterBackground;
- (void)onPlayerWillLoopPlaying:;
- (void)onPlayer:didChangePlaybackStateWithAction:context:;
- (BOOL)isEnterBackground;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (BOOL)isTimingClosePlayCurrentEnable;
- (void)resetTimingCloseIfNeeded;
- (BOOL)needShowAlert;
- (void)setNeedShowAlert:;
- (void)handleTimingClosePlayCurrentIfNeededWithPlaybackAction:;
- (void)realOnPlayer:didChangePlaybackStateWithAction:context:;
- (BOOL)isTimingCloseEnable;
- (void)onBackgroundPlay;
- (void)setIsEnterBackground:;
- (id)initWithPlayerController:;
@end
