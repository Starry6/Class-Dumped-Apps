@interface AWEPadRecommendInterestViewController : UIViewController
@property (nonatomic) BOOL isShowingSkylight;
@property (nonatomic) AWEPadInterestSkyLightViewController skyLightVC;
@property (nonatomic) UIView maskView;
@property (nonatomic) UIView contentMaskView;
@property (nonatomic) BOOL isAnimationing;
@property (nonatomic) UIView topMaskView;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol><AWEFeedTableViewControllerProtocol> contentVC;
@property (nonatomic) <AWEPadRecommendInterestViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) NSString referString;
- (BOOL)canRefresh;
- (id)referString;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (BOOL)configWithRouterParamDict:;
- (void)pauseWithAnimation;
- (void)transition_didStartTransitionWithContext:;
- (BOOL)currentTabIsTop;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_enableCustomActionForSlideDirection:gestureRecognizer:;
- (void)transition_performCustomActionForSlideDirection:gestureRecognizer:;
- (void)animatedRefreshWithCompletion:;
- (BOOL)onSegmentRepeatedClickWithIndex:;
- (unsigned long long)transition_destinatedType;
- (void)teenModeDidChange:isLogout:;
- (double)getCurrentPlayTime;
- (id)topMaskView;
- (void)setTopMaskView:;
- (void)basicModeDidChange:;
- (BOOL)isAnimationing;
- (void)setIsAnimationing:;
- (id)contentVC;
- (void)setContentVC:;
- (void)setIsShowingSkylight:;
- (BOOL)isShowingSkylight;
- (void)setContentMaskView:;
- (id)contentMaskView;
- (void)showSkyLightWithMethod:;
- (id)initWithType:dataController:;
- (id)skyLightView;
- (id)skyLightVC;
- (void)setSkyLightVC:;
- (void)stateChangedForSkyLightHidden:;
- (void)loadSkyLightModel;
- (void)setupSkyLightViewWithModels:;
- (void)didTapMaskView;
- (void)hideSkyLightView:withFeedView:;
- (void)showSkyLightView:withMethod:;
- (void)logShowBarWithMethod:;
- (void)setScrollEnabled:;
- (void)play;
- (id)delegate;
- (id)maskView;
- (BOOL)disableAnimation;
- (id)forwardingTargetForSelector:;
- (void)viewDidLoad;
- (BOOL)respondsToSelector:;
- (void)reload;
- (void)loadCache;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)setDelegate:;
- (void)stop;
- (void)pause;
- (void)setDisableAnimation:;
+ (BOOL)enablePadRecommendInterest;
+ (BOOL)conformsToProtocol:;
@end
