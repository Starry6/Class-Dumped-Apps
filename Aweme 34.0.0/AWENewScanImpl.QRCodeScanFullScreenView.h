@interface AWENewScanImpl.QRCodeScanFullScreenView : UIView
- (BOOL)collectionView:shouldSelectItemAtIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewDidEndDecelerating:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)handleGestureWithRecognizer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
