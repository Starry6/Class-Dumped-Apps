@interface AWEShareLiveImageShareLayout : UICollectionViewFlowLayout
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
@end
