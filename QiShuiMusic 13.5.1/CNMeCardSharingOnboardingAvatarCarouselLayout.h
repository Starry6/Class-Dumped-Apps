@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout
- (double)pagingLength;
- (double)pagingOrigin;
- (long long)selectedPageIndex;
- (double)pageOffsetForIndex:;
- (id)frameForElementAtIndex:visibleBounds:;
- (id)indexesForElementsInRect:visibleBounds:numberOfItems:;
+ (id)indexPathForNearestItemToCenterWithOffset:collectionView:layout:;
@end
