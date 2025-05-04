@interface AWECenteredScrollFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) <AWECenteredScrollFlowLayoutDelegate> delegate;
@property (nonatomic) BOOL enableScale;
@property (nonatomic) @? ratioBlock;
- (id)updatedLayoutAttributes:forIndex:;
- (BOOL)enableScale;
- (id)ratioBlock;
- (void)setEnableScale:;
- (void)setRatioBlock:;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)targetContentOffsetForProposedContentOffset:;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
@end
