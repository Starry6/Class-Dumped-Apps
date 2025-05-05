@interface PSSplitViewController : UISplitViewController
@property (nonatomic) PSRootController containerNavigationController;
@property (nonatomic) <PSSplitViewControllerNavigationDelegate> navigationDelegate;
- (void)setViewControllers:;
- (id)childViewControllerForStatusBarStyle;
- (id)navigationDelegate;
- (id)containerNavigationController;
- (void)setContainerNavigationController:;
- (void)setupControllerForToolbar:;
- (void)popRecursivelyToRootController;
- (id)categoryController;
- (void)showInitialViewController:;
- (void).cxx_destruct;
- (void)setNavigationDelegate:;
- (unsigned long long)supportedInterfaceOrientations;
@end
