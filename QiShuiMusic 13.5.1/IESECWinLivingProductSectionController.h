@interface IESECWinLivingProductSectionController : IESECWinListKitCellController
@property (nonatomic) IESECRelationSKUActionHelper SKUActionHelper;
@property (nonatomic) IESECServiceProxy<IESECWinTabService> tabService;
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECWinGoodsService> goodsService;
@property (nonatomic) IESECServiceProxy<IESECWinLiveService> liveServiceProxy;
@property (nonatomic) IESECRelationAddToCartAnimationHelper animationHelper;
@property (nonatomic) NSString clickArea;
@property (nonatomic) IESECWinLivingProductObject object;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)SKUActionHelper;
- (id)animationHelper;
- (id)cardTrackParams;
- (void)setDataService:;
- (id)getBtmIDWithHost:index:withBuy:;
- (id)btmInfoForCardContentWithIndex:withBuy:;
- (id)cellForItemAtIndex:;
- (void)clickAddButtonWithTouchPoint:;
- (id)clickArea;
- (void)clickBuyButtonView;
- (void)clickReplayButton;
- (id)commonTrackParamsForBST;
- (id)dataService;
- (void)didUpdateToObject:;
- (id)goodsService;
- (void)jumpToGoodsDetailBySchemaWithGoodsModel:btmInfo:;
- (void)jumpToGoodsDetailWithBtmInfo:;
- (void)jumpToGoodsDetailWithGoodsModel:;
- (void)jumpToWindowFeed;
- (id)liveServiceProxy;
- (void)setAnimationHelper:;
- (void)setClickArea:;
- (void)setGoodsService:;
- (void)setLiveServiceProxy:;
- (void)setSKUActionHelper:;
- (void)setTabService:;
- (id)tabService;
- (void)tapOnCoverTagViewWithModel:;
- (void)trackClickProductWithBtmID:btmInfo:elementParams:clickArea:;
- (void)trackShowProductWithCell:;
- (void)trackWithEventName:trackParams:once:btmID:;
- (void)setObject:;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)object;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
