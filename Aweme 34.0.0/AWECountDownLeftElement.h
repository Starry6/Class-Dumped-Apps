@interface AWECountDownLeftElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView containerView;
@property (nonatomic) AWECountDownAnchorView timerView;
@property (nonatomic) AWECountDownElementViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)videoDidActivity;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)addNotifications;
- (void)bindEvent;
- (void)timerViewDidClicked;
- (void)videoPauseIfNeed:;
- (void)dealloc;
- (void)play;
- (void)resume;
- (id)viewModel;
- (void)viewDidLoad;
- (id)containerView;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
- (id)timerView;
- (void)pause;
- (void)setTimerView:;
+ (id)activateInfoWithContext:;
+ (BOOL)shouldActiveWithModel:context:;
@end
