@interface IESECStoreShoppingCartController : IESECRelationController
@property (nonatomic) IESECRelationShoppingCartView shoppingCartView;
@property (nonatomic) NSString shoppingCartURL;
@property (nonatomic) IESECServiceProxy<IESECShopDataService> dataService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataService:;
- (id)shoppingCartURL;
- (void)p_showShoppingCartViewIfNeeded:;
- (id)cartView;
- (void)controllerDidLoad;
- (id)dataService;
- (void)didShowShoppingCartView;
- (void)didTapShoppingCartView;
- (double)p_getShoppingCartBottomOffset:;
- (void)pagerView:didMoveToTab:;
- (void)pagerView:mainScrollViewDidScroll:;
- (void)setShoppingCartURL:;
- (void)setShoppingCartView:;
- (void)setupBinding;
- (id)shoppingCartView;
- (void)updateCartInfoModel:;
- (void)setup;
- (void).cxx_destruct;
- (void)setupUI;
+ (BOOL)controllerShouldLoadWithPageContextV2:;
@end
