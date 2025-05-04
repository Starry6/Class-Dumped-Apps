@interface AWEFeedPlayControlDefaultListenerController : AWEAwemeFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)holdStopPlayer;
- (void)videoControllerWillStartNextLoop:;
- (void)willPlayCell:indexPath:currentModel:;
- (void)didPlayCell:indexPath:currentModel:;
- (void)videoBufferingPrepared:;
- (void)modernVideoBufferingPrepared:;
- (void)videoCacheEndedWhenPlay:;
- (void)videoBufferLoadEnough:;
- (void)videoBufferLoadNotEnough:;
- (id)shouldPreventPlayBeforePlayStateChanged;
- (id)shouldPreventPlayIfActive;
- (void)showOlderInteractiveGuideIfNeededWithNextLoop:;
- (void)playDiscoverHotSearchGuideAnimationWithCurrentModel:;
- (void)cancelPreloadCellAndVideo;
- (void)play;
- (void)stop;
- (void)pause;
@end
