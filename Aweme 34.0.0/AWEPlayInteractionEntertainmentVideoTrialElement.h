@interface AWEPlayInteractionEntertainmentVideoTrialElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<AWEVideoTryWatchViewProtocol> trialTagView;
@property (nonatomic) <AWEEntertainmentVideoTrialPresenterProtocol> presenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)createPresenter;
- (void)presenterTrialDidStart:;
- (void)presenterTrialDidFinish:;
- (void)paidStream:trialRemainingTimeDidChange:totalTimeInterval:;
- (void)paidStream:didFinishTrialWithReason:;
- (id)trialTagView;
- (id)createTrialTagView;
- (void)setTrialTagView:;
- (BOOL)tipChangeWithAutoOpenType;
- (void)setupEventsDefault;
- (void)setupEventsInPaidStream;
- (BOOL)usePaidStream;
- (void)viewDidLoad;
- (id)presenter;
- (void)setPresenter:;
- (void).cxx_destruct;
- (void)reset;
+ (id)activateInfoWithContext:;
@end
