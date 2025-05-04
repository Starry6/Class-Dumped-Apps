@interface AWELongPressAdsActionFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) double normalContentHeight;
@property (nonatomic) double deltaPadding;
@property (nonatomic) NSIndexPath targetIndex;
@property (nonatomic) BOOL isExpanded;
- (double)deltaPadding;
- (void)setDeltaPadding:;
- (double)normalContentHeight;
- (void)setNormalContentHeight:;
- (void)setIsExpanded:;
- (id)targetIndex;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (BOOL)isExpanded;
- (id)collectionViewContentSize;
- (void)setTargetIndex:;
- (void).cxx_destruct;
@end
