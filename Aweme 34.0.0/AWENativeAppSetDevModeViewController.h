@interface AWENativeAppSetDevModeViewController : UIViewController
@property (nonatomic) NSString appName;
@property (nonatomic) NSString appTypeStr;
@property (nonatomic) AWEACLView aclView;
@property (nonatomic) q itemType;
- (void)onBackButtonClicked;
- (void)openButtonClicked;
- (void)setAppTypeStr:;
- (id)appTypeStr;
- (id)initWithAppName:appType:;
- (void)setAclView:;
- (id)aclView;
- (long long)itemType;
- (void)setItemType:;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)setAppName:;
- (id)appName;
@end
