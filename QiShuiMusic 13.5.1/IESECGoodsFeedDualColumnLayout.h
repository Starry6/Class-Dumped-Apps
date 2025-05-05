@interface IESECGoodsFeedDualColumnLayout : UICollectionViewFlowLayout
@property (nonatomic) q shoppingCartGoodsCount;
- (double)firstRecommendAttributesOriginY;
- (void)addAttributesIfNeeded:;
- (void)setShoppingCartGoodsCount:;
- (long long)shoppingCartGoodsCount;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (void).cxx_destruct;
@end
