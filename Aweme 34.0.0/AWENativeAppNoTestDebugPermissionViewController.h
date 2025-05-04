@interface AWENativeAppNoTestDebugPermissionViewController : UIViewController
@property (nonatomic) NSString appId;
@property (nonatomic) q appType;
@property (nonatomic) NSString appTypeStr;
@property (nonatomic) AWEACLView aclView;
- (void)onBackButtonClicked;
- (id)initWithAppId:appType:;
- (void)setAppTypeStr:;
- (id)appTypeStr;
- (void)setAclView:;
- (id)aclView;
- (void)trackDevelopTestLimitShow;
- (id)initWithAppId:;
- (void)setAppType:;
- (long long)appType;
- (void)viewDidLoad;
- (id)appId;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)setAppId:;
@end
