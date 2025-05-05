@interface UIMoreNavigationController : UINavigationController
@property (nonatomic) UIViewController moreListController;
@property (nonatomic) NSArray moreViewControllers;
@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) UIViewController displayedViewController;
@property (nonatomic) BOOL moreViewControllersChanged;
- (void)pushViewController:animated:;
- (id)init;
- (void)viewDidMoveToWindow:shouldAppearOrDisappear:;
- (void).cxx_destruct;
- (void)_willChangeToIdiom:onScreen:;
- (id)moreViewControllers;
- (void)setMoreViewControllers:;
- (BOOL)moreViewControllersChanged;
- (void)setMoreViewControllersChanged:;
- (BOOL)allowsCustomizing;
- (void)setAllowsCustomizing:;
- (void)didShowViewController:animated:;
- (id)_preparedViewController:;
- (void)restoreOriginalNavigationControllerIfNecessary:;
- (void)_restoreOriginalNavigationController;
- (id)displayedViewController;
- (void)setDisplayedViewController:;
- (id)_stateRestorationParentForChildViewController:index:;
- (void)_ensureChildrenHaveParentViewController;
- (void)_redisplayMoreTableView;
- (id)moreListController;
+ (Class)_moreListControllerClass;
@end
