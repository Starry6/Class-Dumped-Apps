@interface AWENativeAppNoBindPermissionViewController : UIViewController
@property (nonatomic) NSString appName;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString appTypeStr;
@property (nonatomic) NSString errMsg;
@property (nonatomic) NSString from;
@property (nonatomic) AWEACLView aclView;
@property (nonatomic) q itemType;
- (id)errMsg;
- (void)setErrMsg:;
- (void)onBackButtonClicked;
- (void)setAppTypeStr:;
- (id)appTypeStr;
- (id)initWithAppName:appId:appType:errMsg:from:;
- (void)setAclView:;
- (id)aclView;
- (long long)itemType;
- (void)setItemType:;
- (void)viewDidLoad;
- (id)appId;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)setAppName:;
- (id)appName;
- (void)setFrom:;
- (void)setAppId:;
- (id)from;
@end
