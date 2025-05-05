@interface UISearchContainerViewController : UIViewController
@property (nonatomic) UISearchController searchController;
- (void)setSearchController:;
- (void)commonInit;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)searchController;
- (void)viewDidLoad;
- (BOOL)_transitionsChildViewControllers;
- (void)_prepareForContainerTransition:;
- (void)setTabBarObservedScrollView:;
- (id)initWithSearchController:;
- (void)_presentSearchControllerIfNecessary;
@end
