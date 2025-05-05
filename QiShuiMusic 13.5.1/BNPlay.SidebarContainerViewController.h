@interface BNPlay.SidebarContainerViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
- (id)etPageName;
- (id)etSceneName;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)interactionControllerForPresentation:;
- (id)animationControllerForDismissedController:;
- (id)interactionControllerForDismissal:;
- (void)onPanGesture:;
- (void)onTapGesture:;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
