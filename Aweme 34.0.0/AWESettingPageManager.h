@interface AWESettingPageManager : NSObject
@property (nonatomic) NSDictionary controllerMap;
@property (nonatomic) AWESettingPageBadgeManager badgeManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didOpenSideBar;
- (void)didCloseSideBar;
- (void)registerBadgeControlDelegate:;
- (void)didClickSettingPage;
- (void)didCreateSettingPage;
- (void)badgeManager:exposeBadgeWithBusinessID:;
- (void)badgeManager:hideBadgeWithReason:businessID:;
- (void)p_forEachControllerPerformBlock:;
- (void)p_loadBadgeManager;
- (void)p_loadController;
- (id)p_registerMap;
- (void)setControllerMap:;
- (id)controllerMap;
- (void)p_forEachController:performBlock:;
- (id)badgeManager;
- (id)init;
- (void)setBadgeManager:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
