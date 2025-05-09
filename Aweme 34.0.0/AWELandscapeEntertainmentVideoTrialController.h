@interface AWELandscapeEntertainmentVideoTrialController : AWELandscapeInteractionBaseController
@property (nonatomic) UIView<AWEVideoTryWatchViewProtocol> trialTagView;
@property (nonatomic) <AWEEntertainmentVideoTrialPresenterProtocol> presenter;
@property (nonatomic) q currentState;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double clickTimeStamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)setAppear:;
- (void)didEnterLandscape;
- (void)afterSetData:;
- (void)bindEvents;
- (id)createPresenter;
- (void)updateControllerWithAnimationOffset:positon:;
- (void)willExitLandscape;
- (double)clickTimeStamp;
- (void)setClickTimeStamp:;
- (void)bindEventsInPaidStream;
- (BOOL)usePaidStreamControl;
- (void)paidStream:trialRemainingTimeDidChange:totalTimeInterval:;
- (void)paidStream:didFinishTrialWithReason:;
- (BOOL)shouldShowRewardedAdvertisingTryWatchView;
- (void)addCountDownViewIfNeeded;
- (void)setupCountDownView:;
- (id)trialTagView;
- (void)updateRewardedAdvertisingTryWatchView:;
- (void)paidStreamControlUpdatePaymentTryWatchView:remainingTime:;
- (void)updateAppearStatusWithAnimation:;
- (id)createTrialTagView;
- (void)didClickUnlockButton;
- (void)setTrialTagView:;
- (void)updateState:;
- (void)setCurrentState:;
- (void)viewDidLoad;
- (id)presenter;
- (void)setPresenter:;
- (long long)currentState;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)reset;
@end
