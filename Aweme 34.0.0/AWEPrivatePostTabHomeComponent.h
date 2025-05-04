@interface AWEPrivatePostTabHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) UIViewController<AWEPrivatePostsViewControllerProtocol> privateVC;
@property (nonatomic) AWEProfileTabMergedGuideViewController tabGuideVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideManager;
- (void)onEnterHomePageTab;
- (void)onReloadUI:isCache:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (BOOL)enableTabGuide;
- (id)tabGuideVC;
- (void)setTabGuideVC:;
- (void)onFinishLogoutWithUid:;
- (void)onUserModelUpdated:;
- (void)onLeaveHomePageTab;
- (void)reloadPrivateDataNeedDelay:;
- (id)privateVC;
- (void)setPrivateVC:;
- (void)p_autoLandingToPrivateTabIfNeeded;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)refreshData;
- (void)onInit;
@end
