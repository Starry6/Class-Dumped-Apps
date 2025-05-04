@interface AWECommentSwiftBizUI.CommentHorizontalMultiImageView : UIView
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)collectionView:canMoveItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)collectionView:moveItemAtIndexPath:toIndexPath:;
- (id)collectionView:targetIndexPathForMoveOfItemFromOriginalIndexPath:atCurrentIndexPath:toProposedIndexPath:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)dragActionWithGes:;
- (void)longPressActionWithGes:;
- (void)collectionViewTapped:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
