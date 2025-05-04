@interface AWEListenFeedExtendCoverFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) BOOL applyTransformToAttributesDelegate;
@property (nonatomic) AWEListenFeedExtendCoverFlowLayoutConfig layoutConfig;
- (void)setLayoutConfig:;
- (void)applyTransformToAttributes:;
- (void)initializeTransformAttributes:;
- (void)applyLinearTransformToAttributes:scale:alpha:;
- (void)applyLinearTransformToAttributes:;
- (unsigned long long)directionWithCenterX:;
- (BOOL)applyTransformToAttributesDelegate;
- (void)setApplyTransformToAttributesDelegate:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)itemSize;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
- (id)layoutConfig;
@end
