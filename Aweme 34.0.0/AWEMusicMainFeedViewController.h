@interface AWEMusicMainFeedViewController : UIViewController
@property (nonatomic) AWEMusicCyclePageView cyclePage;
@property (nonatomic) <MusicService> musicService;
@property (nonatomic) AWEMusicPlayerActionView playerActionView;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) <AWEMusicMainFeedPlayerProtocol> playerService;
@property (nonatomic) AWEMusicSubPlayerNavigatorView navigationBar;
@property (nonatomic) AWEMusicSingleTabTopView singleTabTopView;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) BOOL isQueryingQueue;
@property (nonatomic) BOOL isFirstQueueNull;
@property (nonatomic) BOOL isApplicationStateActive;
@property (nonatomic) BOOL isApplicationStateBackground;
@property (nonatomic) AWEMusicExceptionalView noNetView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) @? collectionGuideBlock;
@property (nonatomic) double enterTime;
@property (nonatomic) Q displayType;
@property (nonatomic) <AWEMusicFeedPlayerDelegate> delegate;
@property (nonatomic) <AWEMusicCollectionServiceProtocol> collectionService;
@property (nonatomic) AWEMusicGuideService guideService;
@property (nonatomic) AWEMusicDSPEventModel eventModel;
@property (nonatomic) NSDictionary headerModelConfigMap;
@property (nonatomic) BOOL disableChangeMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? cancelableBlock;
@property (nonatomic) @? cancelableLunaBannerDismissBlock;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)playerReadyToPlay:;
- (void)setIsViewAppearing:;
- (id)initWithMusicService:;
- (void)setIsSeeking:;
- (void)applicationBecomeActive:;
- (void)showMorePanel;
- (void)queueDidUpdatePlayList:;
- (void)queue:didChangeLoopModeFromLoopMode:;
- (id)musicService;
- (void)onDisplayRefresh;
- (void)setMusicService:;
- (void)rtvServiceWillBegin:;
- (void)rtvServiceDidBegin:;
- (void)rtvServiceWillFinish:;
- (void)rtvServiceDidFinish:;
- (id)playerService;
- (void)setPlayerService:;
- (id)eventModel;
- (void)setEventModel:;
- (void)noNetViewDidTapTryAgain:;
- (id)guideService;
- (void)loadingShow;
- (id)queueHandler;
- (void)loadingDismiss;
- (void)showNoNetView;
- (id)singleTabTopView;
- (void)setSingleTabTopView:;
- (BOOL)canShowBgGuideNow;
- (BOOL)canShowCollectionGuideNow;
- (BOOL)canShowGotoMyCollectionGuideNow;
- (BOOL)canShowChangeSongGuideNow;
- (void)onBgGuideDismissWithMethod:;
- (void)setGuideService:;
- (void)queueHandler:changedOf:scene:;
- (void)pageCycle:scrollDidEndWithMethod:;
- (id)pageCycle:identifierOf:;
- (id)pageCycle:createCycleItem:;
- (void)changeCurrentModel:;
- (id)pageCycleCurrentModel:;
- (id)pageCycle:preModelOfcurrent:;
- (id)pageCycle:nextModelOfcurrent:;
- (BOOL)scrollToNextAnimation:isManual:;
- (BOOL)scrollToPreAnimation:isManual:;
- (void)feedItemDidAppeared:type:;
- (id)commonEventParamsWithModel:;
- (id)cancelableBlock;
- (void)setCancelableBlock:;
- (id)cancelableLunaBannerDismissBlock;
- (void)setCancelableLunaBannerDismissBlock:;
- (void)feedItemGotoSelectedView:model:;
- (void)feedItemPlayProgressGestureBeginDrag:;
- (void)feedItemPlayProgressGestureDidChange:currentTime:progress:;
- (void)feedItemPlayProgressGestureDidEnd:currentTime:progress:completion:;
- (void)feedItemChangeCollection:completion:;
- (void)feedItemPanelTapped:scene:model:;
- (void)feedItemPlayerView:seekToPlay:completion:;
- (void)feedItemPlayerView:model:lyricsStatusChanged:isManual:;
- (id)feedItemPlayerView:;
- (void)setHeaderModelConfigMap:;
- (void)setDisableChangeMode:;
- (void)playerService:didFinishedWithError:;
- (void)playerService:playStatusChanged:;
- (void)playermusicServiceMusicChanged:;
- (void)playerServiceChangeMusicFromRemote:;
- (void)setupMusicService;
- (id)p_musicEventService;
- (id)cyclePage;
- (void)reportPlayerDidEndDisplay;
- (void)setCyclePage:;
- (void)setPlayerActionView:;
- (id)playerActionView;
- (id)noNetView;
- (void)setNoNetView:;
- (void)dismissNoNetView;
- (BOOL)isQueryingQueue;
- (void)setIsQueryingQueue:;
- (BOOL)isApplicationStateActive;
- (void)changeUIPlayStatus:;
- (BOOL)isApplicationStateBackground;
- (void)handlePlayAction;
- (id)collectionGuideBlock;
- (void)setCollectionGuideBlock:;
- (id)collectionService;
- (void)showCollectToastOnItem:type:;
- (void)showPlayListSelectedWithScene:feedModel:;
- (void)p_handleLunaItemPanelTapped:scene:model:;
- (id)headerModelConfigMap;
- (BOOL)disableChangeMode;
- (void)turnToNextPlayLoopMode:;
- (BOOL)canShowPanelScene:model:;
- (void)setCollectionService:;
- (void)playerActionViewPlayPre;
- (void)playerActionViewPlayNext;
- (void)playerActionViewShowQueue;
- (void)playerActionViewClickLoopMode;
- (BOOL)playerActionViewPlayerIsPlaying:;
- (void)updateNavigatorStyle;
- (long long)queueModelsCount;
- (void)showCollectionGuide;
- (BOOL)isFirstQueueNull;
- (void)setIsFirstQueueNull:;
- (id)currentItem;
- (void)applicationWillResignActive:;
- (void)reloadData;
- (void)viewWillDisappear:;
- (id)navigationBar;
- (void)dealloc;
- (id)delegate;
- (BOOL)isSeeking;
- (void)viewDidLayoutSubviews;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)displayLink;
- (unsigned long long)displayType;
- (void)applicationWillEnterForeground:;
- (id)loadingView;
- (void)setDisplayType:;
- (void)viewDidDisappear:;
- (void)scrollViewWillBeginDragging:;
- (long long)preferredStatusBarStyle;
- (void)setDisplayLink:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (void)applicationDidEnterBackground:;
- (void)setNavigationBar:;
- (BOOL)hidesBottomBarWhenPushed;
- (void)setupUI;
- (void)reloadData:;
- (void)handleBack;
- (BOOL)isViewAppearing;
- (double)enterTime;
- (void)setEnterTime:;
@end
