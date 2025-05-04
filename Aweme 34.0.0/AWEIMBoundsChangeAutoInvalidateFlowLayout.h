@interface AWEIMBoundsChangeAutoInvalidateFlowLayout : UICollectionViewFlowLayout
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)invalidationContextForBoundsChange:;
@end
