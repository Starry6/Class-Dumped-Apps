@interface AWEShakeShareAwemeUserCollectionViewLayout : UICollectionViewLayout
@property (nonatomic) BOOL shouldSpringAnimateFirstAppearingCell;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) {CGSize=dd} itemSize;
- (long long)startIndexForItemInRect:;
- (long long)endIndexForItemInRect:;
- (double)minXForItemAtIndex:;
- (long long)indexForCurrentNearestItem;
- (double)relativeDistanceToItemAtIndex:;
- (void)setShouldSpringAnimateFirstAppearingCell:;
- (BOOL)shouldSpringAnimateFirstAppearingCell;
- (double)relativeDistanceToCurrentNearestItem;
- (double)maxXForItemAtIndex:;
- (double)interitemSpacing;
- (void)setInteritemSpacing:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:;
- (id)collectionViewContentSize;
- (long long)itemCount;
- (void)finalizeCollectionViewUpdates;
- (id)itemSize;
- (void)prepareForCollectionViewUpdates:;
- (void)setItemSize:;
- (id)targetContentOffsetForProposedContentOffset:;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
- (double)leadingTrailingInset;
+ (Class)layoutAttributesClass;
@end
