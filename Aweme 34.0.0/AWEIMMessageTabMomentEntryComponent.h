@interface AWEIMMessageTabMomentEntryComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMTabSkeletonInterface> tabSkeletonService;
@property (nonatomic) <AWEIMOnlineAvatarListInterface> avatarListService;
@property (nonatomic) double pullDownThreshold;
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) BOOL isInTransition;
@property (nonatomic) UIView snapshotView;
@property (nonatomic) UIImageView snapshotImageView;
@property (nonatomic) UIView<AFDCloseFriendsPlaceHolderViewProtocol> placeHolderView;
@property (nonatomic) UIView transitionGuideView;
@property (nonatomic) UILabel transitionGuideLabel;
@property (nonatomic) UILabel transitionFinishLabel;
@property (nonatomic) UIImageView transitionIconView;
@property (nonatomic) UIViewPropertyAnimator viewAnimator;
@property (nonatomic) @? animationBlock;
@property (nonatomic) @? animationCompletion;
@property (nonatomic) {CGAffineTransform=dddddd} placeHolderTransform;
@property (nonatomic) BOOL isInteractive;
@property (nonatomic) <AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomTransitionStartViewForOffset:;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (id)viewAnimator;
- (void)setViewAnimator:;
- (void)setIsInTransition:;
- (double)pullDownThreshold;
- (void)setMessageTabModeService:;
- (id)messageTabModeService;
- (void)setTabSkeletonService:;
- (id)tabSkeletonService;
- (void)presentMomentFeed;
- (void)presentMomentFirstFeed;
- (void)setAvatarListService:;
- (BOOL)p_enablePullDown;
- (void)setTransitionGuideLabel:;
- (void)setTransitionFinishLabel:;
- (void)setupPullDownTitleWithDefaultStyle;
- (id)transitionFinishLabel;
- (id)transitionGuideLabel;
- (void)setTransitionGuideView:;
- (id)transitionGuideView;
- (void)setPlaceHolderTransform:;
- (id)placeHolderTransform;
- (void)createAnimator:;
- (id)avatarListService;
- (void)p_directEnterMomentVC;
- (id)SnapShotImageWithAnimation:;
- (id)animationBlock;
- (void)setAnimationBlock:;
- (BOOL)isInteractive;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)setSnapshotView:;
- (void)setAnimationCompletion:;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)snapshotView;
- (id)animationCompletion;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)panGesture;
- (void)setPanGesture:;
- (void)setIsInteractive:;
- (void)handlePanGesture:;
- (id)snapshotImageView;
- (void)setTransitionIconView:;
- (id)transitionIconView;
- (BOOL)isInTransition;
- (void)setSnapshotImageView:;
- (id)placeHolderView;
- (void)setPlaceHolderView:;
+ (BOOL)canCreateComponentWithContext:;
@end
