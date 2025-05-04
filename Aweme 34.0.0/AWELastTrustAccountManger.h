@interface AWELastTrustAccountManger : NSObject
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) AWEPreLoginDataController dataController;
@property (nonatomic) q trustUsersCountFromServer;
- (void)setDataController:;
- (long long)trustUsersCountFromServer;
- (void)setTrustUsersCountFromServer:;
- (void)startLoading;
- (void)setLoadingView:;
- (void)stopLoading;
- (id)loadingView;
- (void).cxx_destruct;
- (id)dataController;
+ (unsigned long long)getLastLoginWayWithPlatform:;
+ (BOOL)enableShowOnekeyLogin;
+ (void)enterLoginProcessWithCompletion:;
+ (void)enableShowUserOneKeyLogin:;
+ (void)enableShowTrustUserOneKeyLogin:;
+ (id)sharedInstance;
@end
