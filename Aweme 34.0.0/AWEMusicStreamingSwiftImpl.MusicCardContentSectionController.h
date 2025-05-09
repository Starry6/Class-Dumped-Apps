@interface AWEMusicStreamingSwiftImpl.MusicCardContentSectionController : _TtGC23BDMultiContentContainer28BaseContentSectionControllerC26AWEMusicStreamingSwiftImpl32MusicCardContentSectionViewModel_
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) <IESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL forceUsePlayerVideoPlayEndTracker;
- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:;
- (BOOL)isContentReady;
- (BOOL)shouldResponseToTap:from:;
- (id)getVideoController;
- (void)prepareForDisplayIfNeeded;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)repostModel;
- (id)repostFromModel;
- (id)getPlayModeWithAutoPlayMode;
- (id)playerExtraTrackInfo;
- (id)internalLogExtraDict;
- (BOOL)isPlaying;
- (id)forwardingTargetForSelector:;
- (void)player:playbackFailedWithError:;
- (void)player:didChangeStallState:;
- (void)player:playbackFailedForURL:error:;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)playerWillStartNextLoop:;
- (void)player:didChangePlaybackToAction:;
- (void)sectionControllerWillDisplay:;
- (void)sectionControllerDidEndDisplaying:;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (BOOL)forceUsePlayerVideoPlayEndTracker;
- (void)setForceUsePlayerVideoPlayEndTracker:;
- (id)init;
- (void)setPlayerController:;
- (id)playerController;
- (Class)cellClass;
- (void).cxx_destruct;
+ (Class)sectionViewModelClass;
@end
