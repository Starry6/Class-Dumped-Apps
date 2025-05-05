@interface ESTabBarController_swift.ESTabBarController : UITabBarController
@property (nonatomic) UIViewController selectedViewController;
@property (nonatomic) q selectedIndex;
- (void)setSelectedViewController:;
- (long long)selectedIndex;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)setSelectedIndex:;
- (void)tabBar:didSelectItem:;
- (void)tabBar:willBeginCustomizingItems:;
- (void)tabBar:didEndCustomizingItems:changed:;
- (id)selectedViewController;
@end
