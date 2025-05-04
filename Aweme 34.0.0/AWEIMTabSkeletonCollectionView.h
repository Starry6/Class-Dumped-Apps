@interface AWEIMTabSkeletonCollectionView : UICollectionView
@property (nonatomic) q cellSwipeType;
- (BOOL)p_enableCellSwipe;
- (long long)cellSwipeType;
- (void)setCellSwipeType:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
@end
