@interface AWEFeedAutoPlayFloatBtnController : AWEBaseController
@property (nonatomic) <AWEFeedAutoPlayManagerProtocol> autoPlayManager;
@property (nonatomic) UIView<AWEFeedAutoPlayFloatingButtonProtocol> autoPlayFloatingBtn;
@property (nonatomic) DUXPopover timerPopover;
@property (nonatomic) BOOL isManualScroll;
@property (nonatomic) BOOL enablePureMode;
@property (nonatomic) BOOL timerTipBubbleShowed;
@property (nonatomic) q playTimeConfig;
@property (nonatomic) NSIndexPath didEndDisplayingIndexPath;
@property (nonatomic) NSIndexPath willDisplayIndexPath;
@property (nonatomic) double floatingButtonBottomOffsetCache;
@property (nonatomic) {CGSize=dd} lastContainerSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (void)viewDidLoadAfterTableviewSetup;
- (void)scrollViewDidScrollEndWithActive;
- (void)videoPlayer:updatePlayTime:totalTime:;
- (void)setAutoPlayManager:;
- (id)autoPlayManager;
- (void)dailyAlertDidShow;
- (void)dailyAlertDidDismiss;
- (void)onPlayInteractionPureModeChangeNotification:;
- (void)setWillDisplayIndexPath:;
- (id)willDisplayIndexPath;
- (void)setDidEndDisplayingIndexPath:;
- (id)didEndDisplayingIndexPath;
- (void)setTimerTipBubbleShowed:;
- (void)setPlayTimeConfig:;
- (void)storyVideoPlayTimeUpdate:;
- (void)onLiveCellPlayTimeUpdate:;
- (id)autoPlayFloatingBtn;
- (void)setAutoPlayFloatingBtn:;
- (void)updateFloatingButtonLayoutWithCell:;
- (id)timerPopover;
- (void)updateBtnAlphaWithAweme:;
- (void)setIsManualScroll:;
- (BOOL)isManualScroll;
- (void)setEnablePureMode:;
- (BOOL)floatingBtnShouldHidden;
- (id)lastContainerSize;
- (void)breakPointDidChange;
- (void)setLastContainerSize:;
- (void)tryShowPlayTimeTipWithUpdatePlayTime:totalTime:model:;
- (long long)playTimeConfig;
- (BOOL)timerTipBubbleShowed;
- (void)showTimerTipBubble;
- (void)setTimerPopover:;
- (BOOL)enablePureMode;
- (double)floatingButtonBottomOffsetCache;
- (void)setFloatingButtonBottomOffsetCache:;
- (void)viewWillDisappear:;
- (id)init;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
+ (Class)aAWEPadModuleAdapterClass;
@end
