@interface AWEPlayInteractionFeedDanmakuController : AWEPlayInteractionNewBaseController
@property (nonatomic) <AWEDanmakuBaseControllerViewModelProtocol> danmakuViewModel;
@property (nonatomic) XIGDanmakuPlayer<AWEPlayInteractionDanmakuPlayerProtocol> danmakuPlayer;
@property (nonatomic) NSMutableArray postDanmaKuIds;
@property (nonatomic) NSMutableArray deleteDanmaKuIds;
@property (nonatomic) double currentDanmakuRate;
@property (nonatomic) XIGDanmakuItemDescriptor currentSelectDanmaku;
@property (nonatomic) BOOL hasShowDeleteToast;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (nonatomic) double alphaBeforeVideoShrinked;
@property (nonatomic) BOOL videoShrinked;
@property (nonatomic) BOOL isFakedClose;
@property (nonatomic) BOOL hasTrackFirstDanmakuShow;
@property (nonatomic) NSMutableOrderedSet displayedDanmakuIdList;
@property (nonatomic) NSMutableOrderedSet fakedCloseDanmakuIdList;
@property (nonatomic) NSMutableArray videoTimeList;
@property (nonatomic) NSMutableArray fakedCloseDanmakuVideoTimeList;
@property (nonatomic) q danmakuPlayCount;
@property (nonatomic) q danmakuDropCount;
@property (nonatomic) double danmakuInputViewClickTime;
@property (nonatomic) NSString accountType;
@property (nonatomic) NSString bgPlayModelID;
@property (nonatomic) BOOL needUpdateDanmakuLayOut;
@property (nonatomic) NSMutableDictionary playTypeDic;
@property (nonatomic) BOOL shouldDanmakuTrackPlayResult;
@property (nonatomic) <AWEDanmakuBaseContextProtocol> danmakuContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_viewController:willTransitionToSize:transitionCoordinator:;
- (void)onPlayerWillLoopPlaying:;
- (void)onPlayer:didChangeStallState:actionType:reason:;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)setHide:;
- (void)didDisplay;
- (double)currentPlayTime;
- (id)aAWEPadModuleAdapter;
- (double)getDanmakuTopMargin;
- (double)danmakuInputViewClickTime;
- (void)setDanmakuInputViewClickTime:;
- (void)onPlayerPlay:ifPlay:;
- (void)onPlayerPause:;
- (void)onPlayerStop:;
- (void)onPlayFromOutCall;
- (void)didDroppedDanmakus:;
- (void)didFinishDanmakuLocationUpdated:;
- (void)willDispatchDanmaku:;
- (void)didDisplayDanmaku:inContainerView:;
- (void)didEndDisplayDanmaku:inContainerView:;
- (void)didTappedDanmaku:inContainerView:;
- (double)playPercent;
- (id)danmakuViewModel;
- (double)currentPlayRate;
- (long long)videoPlayState;
- (id)danmakuPlayer;
- (id)postDanmaKuIds;
- (void)setHasTrackFirstDanmakuShow:;
- (void)updateDanmakuViewStatus:;
- (void)trackDanmakuPlayResultIfNeed;
- (double)currentDanmakuRate;
- (void)setCurrentDanmakuRate:;
- (void)resumeSelectedDanmaView;
- (void)setCurrentSelectDanmaku:;
- (id)displayedDanmakuIdList;
- (id)videoTimeList;
- (id)playTypeDic;
- (void)resumeDanmakuPlayer;
- (void)refreshDanmakuLayOut;
- (id)currentSelectDanmaku;
- (long long)danmakuPlayCount;
- (void)setDanmakuPlayCount:;
- (BOOL)hasTrackFirstDanmakuShow;
- (void)trackFirstDanmakuShow:;
- (void)setDisplayedDanmakuIdList:;
- (void)setVideoTimeList:;
- (long long)danmakuDropCount;
- (void)setDanmakuDropCount:;
- (BOOL)isDanmakuViewShowing;
- (void)updateDanmaKuStyleIfNeed;
- (void)pauseDanmakuPlayer;
- (void)stopDanmakuPlayer;
- (void)didTappedDanmakuBaseAction:;
- (void)changeUIWithTappedDanmaku:;
- (void)didTappedDanmakuDiggNumView:;
- (void)didTappedDanmaku:;
- (void)updateDanmakuPlayStatus;
- (id)getRequestLogID:;
- (id)getPlayTrackParams;
- (BOOL)canUpdateDanmakuPlayerLifeStatus;
- (void)didReceivedNewData:;
- (void)didReceivedAppendData:;
- (id)danmakuContainerView;
- (void)deleteDanmakuWithBlock:;
- (id)currentDanmakuPlayer;
- (void)sendDanmakuWithInputModel:postScene:;
- (void)danmakuInputViewDismissAction;
- (BOOL)canHandleDanmaKuTap:;
- (void)handleDanmakuViewTap:;
- (void)handleDanmakuDigViewTap:;
- (double)danmakuTotalLifeTime;
- (double)danmakuSpeedFactor;
- (void)setDanmakuPlayer:;
- (void)setDanmakuViewModel:;
- (void)setPostDanmaKuIds:;
- (void)setPlayTypeDic:;
- (void)updateAllDisplayingDanmakuAlpha;
- (BOOL)videoShrinked;
- (void)setVideoShrinked:;
- (void)didReceiveAWEPlayInteractionProgressTouchEndNotification;
- (void)setupEvent;
- (void)configTrackDanmakuSettingData;
- (id)danmakuContext;
- (void)showLongPressPanel;
- (BOOL)isNeedToUpdateDanmakuLayOut;
- (void)updateDanmakuViewLayOut;
- (void)resetDanmakuViewLayOut;
- (void)setDanmakuViewLayOut;
- (BOOL)needUpdateDanmakuLayOut;
- (BOOL)enableBackgroundPauseDanmaku;
- (void)setBgPlayModelID:;
- (id)bgPlayModelID;
- (void)setNeedUpdateDanmakuLayOut:;
- (void)setDanmakuContext:;
- (void)setDanmakuPostPauseVideoPlay:;
- (BOOL)danmakuPostPauseVideoPlay;
- (void)setHasShowDeleteToast:;
- (BOOL)shouldShowDanmakuInFeed:;
- (void)setShouldDanmakuTrackPlayResult:;
- (void)updateDanmakuPlaySpeedIfNeed;
- (void)startLoadDanmakuDataIfNeeded;
- (void)showShieldGuideDanmakuIfNeedWithTime:;
- (void)showShieldGuideDanmakuIfNeed;
- (void)trackVerticalDanmakuSettingFirstLoad;
- (void)resumeSelectedDanmaViewIfNeed;
- (id)deleteDanmaKuIds;
- (void)updateDanmakuViewStatus:fromSwitch:;
- (BOOL)enableDanmakuFriendCrashFix;
- (BOOL)enableDanmakuLayOutOpt;
- (BOOL)isFakedClose;
- (id)fakedCloseDanmakuIdList;
- (id)fakedCloseDanmakuVideoTimeList;
- (BOOL)shouldDanmakuTrackPlayResult;
- (void)trackVerticalDanmakuSetting;
- (void)showDanmakuInputViewWithExtraDic:willDismissBlock:didDismissBlock:;
- (void)setDeleteDanmaKuIds:;
- (BOOL)hasShowDeleteToast;
- (double)alphaBeforeVideoShrinked;
- (void)setAlphaBeforeVideoShrinked:;
- (void)setIsFakedClose:;
- (void)setFakedCloseDanmakuIdList:;
- (void)setFakedCloseDanmakuVideoTimeList:;
- (id)init;
- (void)dealloc;
- (double)currentTime;
- (void)setAccountType:;
- (void)viewDidLoad;
- (id)accountType;
- (id)playerController;
- (void)setData:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)didEndDisplaying;
- (BOOL)isViewAppearing;
- (void)willDisplay;
+ (Class)aAWEPadModuleAdapterClass;
@end
