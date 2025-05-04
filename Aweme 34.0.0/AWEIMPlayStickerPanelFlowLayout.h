@interface AWEIMPlayStickerPanelFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) double figmaDefineSpace;
- (void)setFigmaDefineSpace:;
- (double)figmaDefineSpace;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
@end
