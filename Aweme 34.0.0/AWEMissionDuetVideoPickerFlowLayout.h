@interface AWEMissionDuetVideoPickerFlowLayout : UICollectionViewFlowLayout
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
@end
