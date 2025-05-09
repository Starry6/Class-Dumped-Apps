@interface AWEDPlayerComponentLive : AWEDPlayerBaseComponent
@property (nonatomic) <AWELiveReplayServiceManagerInterface> liveReplayInteractionManager;
@property (nonatomic) BOOL isFinishPlay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)playerWillLoopPlaying:;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (void)setPlayerSeekTime:completion:;
- (id)liveReplayInteractionManager;
- (id)liveModuleService;
- (BOOL)hasGoodsStrictly;
- (id)liveEntry;
- (void)trackLiveReplayPlayDurationFromDisappear:;
- (void)showLiveBubbleGuideIfNeed;
- (void)playTimeUpdate;
- (void)configLiveReplayInteractionView;
- (BOOL)isFinishPlay;
- (void)setIsFinishPlay:;
- (void)livereplay_player:didChangePlaybackStateWithAction:;
- (void)setLiveReplayInteractionManager:;
- (BOOL)shouldShowPOICard;
- (void)setModel:;
- (void)viewWillDisappear:;
- (void)prepareForDisplay;
- (BOOL)isAdvertisement;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
