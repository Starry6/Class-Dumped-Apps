@interface AWEShopSeekTabDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIViewController<AWEShopSeekWorkViewControllerProtocol> shopSeekVC;
@property (nonatomic) NSString searchType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadEmptyPage;
- (void)onRefreshHeaderView:shouldRefreshTabView:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (void)onUpdateHeaderHeight;
- (BOOL)onConfigWithRouterParamDict:;
- (void)onDidRequestUser:error:;
- (id)shopSeekVC;
- (void)setShopSeekVC:;
- (id)searchType;
- (void)setSearchType:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)onInit;
@end
