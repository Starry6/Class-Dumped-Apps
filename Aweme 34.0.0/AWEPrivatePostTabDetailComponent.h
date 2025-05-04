@interface AWEPrivatePostTabDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIViewController<AWEPrivatePostsViewControllerProtocol> privateVC;
@property (nonatomic) AWEProfileTabMergedGuideViewController tabGuideVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideManager;
- (void)onRefreshHeaderView:shouldRefreshTabView:;
- (id)padService;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (void)onDidRequestUser:error:;
- (BOOL)enableTabGuide;
- (id)tabGuideVC;
- (void)setTabGuideVC:;
- (void)reloadPrivateDataNeedDelay:;
- (id)privateVC;
- (void)setPrivateVC:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)refreshData;
- (void)onInit;
@end
