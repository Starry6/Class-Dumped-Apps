@interface AWEIMCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout
- (id)evaluatedSectionInsetForItemAtIndex:;
- (double)evaluatedMinimumInteritemSpacingForSectionAtIndex:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
@end
