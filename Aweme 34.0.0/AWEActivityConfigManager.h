@interface AWEActivityConfigManager : NSObject
@property (nonatomic) AWEActivityControllerManager feedContainManager;
@property (nonatomic) AWEActivityControllerManager detailManager;
@property (nonatomic) AWEActivityControllerManager nearby2TabManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)teenModeDidChange:isLogout:;
- (id)detailManager;
- (void)setDetailManager:;
- (void)setupObservation;
- (void)setupPendantBaseView:type:;
- (void)cleanActivityPendantData;
- (id)feedContainManager;
- (id)nearby2TabManager;
- (void)enableLottieAnimation:baseView:;
- (void)updateDataAndDownloadResourceWithSetting:;
- (void)setFeedContainManager:;
- (void)setNearby2TabManager:;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
