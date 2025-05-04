@interface AWEPublishHalfScreenPopupViewController : UIViewController
@property (nonatomic) AWEPublishHalfScreenContentViewController contentVC;
@property (nonatomic) <AFDModalViewHelperProtocol> helper;
@property (nonatomic) UINavigationController innerNavigation;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:;
- (void)presentedViewPanFinished;
- (id)contentVC;
- (void)setContentVC:;
- (void)setInnerNavigation:;
- (id)innerNavigation;
- (id)initWithContentVC:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void)setHelper:;
- (void).cxx_destruct;
- (id)helper;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
