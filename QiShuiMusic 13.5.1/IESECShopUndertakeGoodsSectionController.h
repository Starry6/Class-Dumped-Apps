@interface IESECShopUndertakeGoodsSectionController : IESECShopGoodsSectionController
@property (nonatomic) IESECObjectMapper undertakeObjectMapper;
@property (nonatomic) IESECShopGoodsAddToCartHandler addToCartHandler;
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addToCartHandler;
- (id)cellForItemAtIndex:relationGoodsModel:;
- (void)configureObjectMapper;
- (void)setAddToCartHandler:;
- (void)setUndertakeObjectMapper:;
- (id)sizeForItemAtIndex:relationGoodsModel:;
- (void)tapAddToCartButton:withTouchPoint:atIndex:;
- (void)tapOnSourceView:jump:;
- (id)undertakeObjectMapper;
- (void)setTracker:;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
@end
