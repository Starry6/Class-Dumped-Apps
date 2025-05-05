@interface IESECTabElementLifecycleViewController : UIViewController
@property (nonatomic) IESECSlidingTabContainerView slidingContainer;
@property (nonatomic) UIScrollView contentScrollView;
- (void)setSlidingContainer:;
- (id)slidingContainer;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setContentScrollView:;
@end
