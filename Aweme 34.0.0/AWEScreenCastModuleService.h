@interface AWEScreenCastModuleService : HTSService
@property (nonatomic) NSString sceneID;
@property (nonatomic) AWEScreenCastControlViewConfig awemeControlViewConfig;
@property (nonatomic) AWEScreenCastAwemeImpl awemeImpl;
@property (nonatomic) AWEScreenCastJSBridgeImpl jsbridgeImp;
@property (nonatomic) BOOL allowBusinessPlayer;
@property (nonatomic) NSDictionary playInfo;
@property (nonatomic) <AWEScreenCastFloatingViewService> floatingViewService;
@property (nonatomic) <AWEScreenCastShortConfigService> shortConfigService;
@property (nonatomic) NSMutableArray searchTasks;
@property (nonatomic) AWEScreenCastObserver screenCastObserver;
@property (nonatomic) AWEAwemeModel lvFocusModeAlbum;
@property (nonatomic) NSArray lvFocusModeEpisodeCache;
@property (nonatomic) AWEAwemeModel fromModel;
@property (nonatomic) BOOL isInCastInnerFeed;
@property (nonatomic) BDSCProgressInfo curProgressInfo;
@property (nonatomic) Q playStatus;
@property (nonatomic) AWEScreenCastControlViewConfig currentBizConfig;
@property (nonatomic) BOOL isLongVideoFocusMode;
@property (nonatomic) BOOL needShowSearchViewAfterForceUpdateToPortrait;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fromModel;
- (void)setFromModel:;
- (BOOL)isScreenCasting;
- (unsigned long long)playStatus;
- (id)playInfo;
- (void)setPlayInfo:;
- (BOOL)checkIsValid:;
- (BOOL)isSearchViewShowing;
- (BOOL)checkCanCastLongVideoWithModel:;
- (void)showCastSearchDevicesView;
- (void)showCastSearchDevicesViewWithDelay;
- (void)closeSearchDeviceViewController;
- (BOOL)mediumLandscapeCastEnable:;
- (BOOL)longVideoSupportCast:;
- (BOOL)canScreenCastWithScene:;
- (BOOL)longVideoEnableOnlySupportXsg:;
- (id)shortVideoCastConfig:;
- (BOOL)longVideoCastInShortFeedEnable;
- (BOOL)longVideoCastInLandscapeFeedEnable;
- (BOOL)shortVideoCastEnableWithReferString:;
- (BOOL)landscapeNewEnableWithReferString:;
- (BOOL)searchViewUnification;
- (BOOL)useNewControlViewUI;
- (id)byteScreenCastContext;
- (id)controlViewConfig;
- (void)updateDayMode:;
- (void)updateXsgIndentifyStatusWithModel:;
- (void)showCastControlViewWithConfig:;
- (void)updateControlViewWithConfig:;
- (id)createCastControlViewWithConfig:;
- (void)startupScreenCastIfNeed;
- (void)closeScreenCast;
- (void)closeScreenCast:disconnect:;
- (void)closeScreenCastOnlyRemoveCastControlView;
- (BOOL)isCastViewShowing;
- (BOOL)isCastControlViewShowing;
- (void)seekToProgress:;
- (BOOL)isInLVScreenCasting;
- (BOOL)isInShortScreenCasting;
- (void)preSearch;
- (void)stopPreSearchIfNeeded;
- (BOOL)isEnableAirPlayMirrorForPlaylet;
- (BOOL)isAirPlayMirroring;
- (void)removeAllScreenCastInnerFeed;
- (void)activeListenerWith:;
- (void)invokeWithArgs:;
- (id)invokeWithAction:uuid:params:;
- (void)openFeedBackPage;
- (BOOL)needEnterCastPageForModel:;
- (BOOL)needForbidWithModel:;
- (id)castForbiddenToastWithModel:;
- (BOOL)isLongVideoWithModel:;
- (id)videoIDWithModel:;
- (id)longVideoHeadTailTimeWithModel:;
- (id)curSceneString;
- (void)startScreenCastWithVideoModel:progressInfo:;
- (void)startScreenCastWithVideoModel:progressInfo:completed:;
- (void)updateCastPlayVideoList:;
- (void)longVideoFocusModeUpdatePlayVideoList:;
- (void)appendCastPlayVideoList:;
- (BOOL)checkCanCastVideoInFeedWith:landscape:;
- (BOOL)checkLandscapeCanCastWith:;
- (void)preCheckForVideoInfo:;
- (void)preCheckForVideoInfo:authorID:;
- (void)preSetupViewModelConfig:forVideoInfo:;
- (BOOL)canContinuePlay;
- (id)bizSettingConfig;
- (void)updateScreenScreenBottomDistance:;
- (BOOL)enableLongVideoFocusMode;
- (void)quitLongVideoFocusMode;
- (void)recordLongVideoFocusMode:;
- (id)currentFocusModeRecordAlbum;
- (id)currentFocusModeEpisodeList;
- (BOOL)isLongVideoLastEpisode:;
- (void)tryFetchLongVideoAlbumEpisodeList:needUpdateList:;
- (void)updateLongVideoFocusEpisodesCache:;
- (id)getVideoListDescription:;
- (void)trackScreenCastButtonShowed:awemeModel:extraParams:;
- (void)trackScreenCastButtonClicked:awemeModel:extraParams:;
- (void)trackFloatingViewShowed:awemeModel:extraParams:;
- (void)trackFloatingViewClicked:awemeModel:extraParams:;
- (void)trackScreenCastButtonActionForbidden:extraParams:;
- (void)trackControlPageReturnClickedWithExtraParams:;
- (void)trackScreenCastContentServiceWithPath:duration:error:extraParams:;
- (void)trackScreenCastContentServiceWithExtraParams:;
- (void)trackScreenCastInnerFeedClosedWithExtraParams:;
- (void)sendEvent:extraParams:;
- (id)commonEventParamsWithAwemeModel:;
- (id)floatingViewService;
- (id)shortConfigService;
- (void)addSearchTask:;
- (void)performBonjourBlock:;
- (void)enterScreenCastInnerListWithAwemeModelList:enterFrom:fromModel:preNode:params:;
- (void)requestWithParams:pullType:completion:;
- (unsigned long long)currentCastIndex;
- (id)screenCastFeedVideoList;
- (BOOL)needEnterSearchProcess;
- (void)tryCastModel:;
- (BOOL)innerFeedNeedLoadMoreData;
- (BOOL)screenCastInnerFeedEnabled;
- (long long)innerFeedCastNextLimitCount;
- (id)curProgressInfo;
- (id)currentBizConfig;
- (BOOL)isLongVideoFocusMode;
- (BOOL)isInCastInnerFeed;
- (void)setIsInCastInnerFeed:;
- (BOOL)allowBusinessPlayer;
- (void)setAllowBusinessPlayer:;
- (BOOL)needShowSearchViewAfterForceUpdateToPortrait;
- (void)setNeedShowSearchViewAfterForceUpdateToPortrait:;
- (id)commonEventParams;
- (BOOL)canStopOtherTask:;
- (void)willChangeState:task:;
- (id)awemeImpl;
- (BOOL)shortVideoCastConfigSupportPortrait:referString:;
- (id)awemeControlViewConfig;
- (id)screenCastObserver;
- (void)setAwemeControlViewConfig:;
- (BOOL)needEnterFocusModeWithModel:;
- (void)setLvFocusModeAlbum:;
- (void)setLvFocusModeEpisodeCache:;
- (id)lvFocusModeAlbum;
- (id)lvFocusModeEpisodeCache;
- (id)searchTasks;
- (void)setAwemeImpl:;
- (void)quitLongVideoFocusModeIfNeeded:;
- (id)jsbridgeImp;
- (BOOL)supportCastWithAwemeType:;
- (void)cacheOnlyXsgForLongVideoWithModel:;
- (id)extraParamsWithSceneID:;
- (void)setJsbridgeImp:;
- (void)setFloatingViewService:;
- (void)setShortConfigService:;
- (void)setSearchTasks:;
- (void)setScreenCastObserver:;
- (void)setSceneID:;
- (BOOL)isPlaying;
- (void)play;
- (id)sceneID;
- (void).cxx_destruct;
- (void)pause;
- (void)updateSceneID:;
@end
