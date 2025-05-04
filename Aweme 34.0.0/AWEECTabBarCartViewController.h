@interface AWEECTabBarCartViewController : UIViewController
@property (nonatomic) UIViewController cartVC;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)currentTabReferString;
- (void)tabBarItemViewControllerDidSelectFromPreviousIndex:;
- (void)tabBarItemViewControllerDidUnselect;
- (void)tabBarItemViewControllerDidDoubleTap;
- (void)tabBarItemViewControllerDidLongPress;
- (id)cartVC;
- (void)setCartVC:;
- (void)setupCartVC;
- (void)buildUpUI;
- (id)aIESECAppInfoServiceCommonAdapter;
- (id)baseTrackerParams;
- (id)init;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
+ (Class)aIESECAppInfoServiceCommonAdapterClass;
@end
