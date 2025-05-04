@interface AWEIMShareLandscapeNavigationController : UINavigationController
@property (nonatomic) AWEPanelTransitionController transitionController;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIViewController targetVC;
@property (nonatomic) Q landscapeStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)targetVC;
- (void)setTargetVC:;
- (void)p_setup;
- (unsigned long long)landscapeStyle;
- (void)setLandscapeStyle:;
- (id)initWithRootViewController:targetVC:;
- (id)initWithRootViewController:;
- (void)viewWillDisappear:;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)transitionController;
- (void)setTransitionController:;
- (id)gradientLayer;
- (void)setGradientLayer:;
@end
