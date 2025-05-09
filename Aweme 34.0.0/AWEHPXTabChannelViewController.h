@interface AWEHPXTabChannelViewController : UIViewController
@property (nonatomic) UIView containerView;
@property (nonatomic) AWEHPChannelPageViewController channelViewController;
@property (nonatomic) q playState;
@property (nonatomic) double marginTop;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) AWEHPXTabChannelManager manager;
@property (nonatomic) NSArray itemsArray;
@property (nonatomic) BOOL isShowTopDormerView;
@property (nonatomic) q type;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canRefresh;
- (id)referString;
- (void)transition_didPopDoneTransitionWithContext:;
- (void)pauseWithAnimation;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (void)transition_didStartTransitionWithContext:;
- (BOOL)transition_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)currentAweme;
- (void)cancelRefresh;
- (BOOL)currentTabIsTop;
- (void)onAwemeDeleted:isDislike:;
- (void)setAccessoriesHidden:;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_enableCustomActionForSlideDirection:gestureRecognizer:;
- (void)transition_performCustomActionForSlideDirection:gestureRecognizer:;
- (void)feedRefreshWithType:completion:;
- (void)animatedRefreshWithCompletion:;
- (void)seekPlayTimeWithItemID:;
- (void)onAwemeMarkDislikeCanWithdraw:;
- (void)onAwemeDeleted:isLiveFinish:isDislike:;
- (void)setRefreshMethod:;
- (id)currentAwemeID;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:;
- (void)transition_didCancelPercentDrivenTransitionWithContext:;
- (void)transition_addDisappearBlock:forKey:;
- (void)transition_didChangePercentDrivenTransitionWithContext:;
- (id)getCurrentChannelController;
- (void)channelManager:removeChannel:selectedChannel:;
- (void)channelManager:switchSelectedChannelFrom:to:config:;
- (void)channelManager:updateXTabThemeStyleWithChannel:;
- (void)updateCurrentChannelTopBarMask;
- (void)addContentViewController:needsLayout:;
- (id)channelViewController;
- (void)switchChannelViewController:animateType:;
- (void)removeContentViewController:;
- (void)setChannelViewController:;
- (BOOL)isShowTopDormerView;
- (void)setIsShowTopDormerView:;
- (void)setScrollEnabled:;
- (void)setManager:;
- (id)init;
- (void)play;
- (void)viewDidLoad;
- (void)setBackgroundView:;
- (void)reload;
- (id)containerView;
- (id)backgroundView;
- (id)manager;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (double)marginTop;
- (void)setMarginTop:;
- (long long)playState;
- (void)setPlayState:;
- (id)itemsArray;
- (void)setItemsArray:;
@end
