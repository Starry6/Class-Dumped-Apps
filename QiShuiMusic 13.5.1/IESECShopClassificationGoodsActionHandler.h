@interface IESECShopClassificationGoodsActionHandler : NSObject
@property (nonatomic) IESECShopGoodsState state;
@property (nonatomic) IESECShopContext legacyShopContext;
@property (nonatomic) IESECShopClassificationGoodsListViewController viewController;
@property (nonatomic) IESECCommonGoodsListHandler commonGoodsHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachState:;
- (id)commonGoodsHandler;
- (void)didSelectRelationGoods:cell:atIndex:;
- (id)extraEntranceInfoAtIndex:viewModel:;
- (void)handleBackButtonClick:;
- (void)handleSearchButtonClick:;
- (id)legacyShopContext;
- (void)redirectToGoodsDetailFromRequestAtIndex:viewModel:extraParams:btmID:btmToken:;
- (void)redirectToGoodsDetailFromURL:atIndex:viewModel:btmToken:;
- (void)setCommonGoodsHandler:;
- (void)setViewController:;
- (void)setState:;
- (id)viewController;
- (id)state;
- (void).cxx_destruct;
@end
