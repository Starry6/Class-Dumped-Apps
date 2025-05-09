@interface IESECLivePromotionCardJumpHandler : NSObject
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECLiveSKUView skuView;
@property (nonatomic) IESECLivePromotionCardView cardView;
@property (nonatomic) CALayer cartAddanimationLayer;
@property (nonatomic) <IESECLivePromotionCardBusinessDelegate> delegate;
@property (nonatomic) IESECLivePromotionCardBusinessParams bizParams;
@property (nonatomic) IESECLivePromotionCardTracker promotionCardTracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)businessContext;
- (void)setLiveContext:;
- (id)skuView;
- (void)addToCartWithModel:extraInfo:requestParams:;
- (id)bizParams;
- (id)cartAddanimationLayer;
- (void)clickWithPromotionCardView:event:;
- (void)closeSKU:withComletion:;
- (id)coreParams;
- (id)getSkuFrom;
- (BOOL)goodsJumpHandler:shouldJump:;
- (void)handleAddToCartLogicWithSKUInfo:goodsModel:extraInfo:btmPageInfo:cartTrackParams:;
- (void)handleAddToCartWithModel:extraInfo:;
- (void)handleSubCartLogicWithSKUInfo:goodsModel:extraInfo:btmPageInfo:cartTrackParams:;
- (id)initWithLiveContext:;
- (id)jumpHandler;
- (id)liveContext;
- (id)maskSize;
- (void)operateDirectlyWithItem:skuItem:extraInfo:;
- (void)operateSKUView:addToCartWithGoodsModel:extraInfo:;
- (void)operateSKUView:updateShowStatus:;
- (id)p_SKUCreateInfoFromExtraInfo:goodsModel:liveContext:;
- (void)p_createSKUViewWithGoodsModel:extraInfo:;
- (id)p_ecomEntranceForm;
- (void)p_noticeBuyIntension;
- (void)p_setSearchBCMPageParams;
- (id)panelContainer;
- (id)panelEnvironment;
- (id)panelSize;
- (id)promotionCardTracker;
- (void)setBizParams:;
- (void)setCartAddanimationLayer:;
- (void)setPromotionCardTracker:;
- (void)setSkuView:;
- (BOOL)shouldRemoveLiveCommonSKUApiWithGoodsViewModel:;
- (void)subCartWithModel:extraInfo:requestParams:;
- (void)switchListToSKUWithGoodsModel:extraInfo:completion:;
- (id)tracker;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
@end
