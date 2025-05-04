@interface AWESearchAccessibleCollectionView : UICollectionView
@property (nonatomic) BOOL enablePagePanBackGesture;
@property (nonatomic) double panBackGestureLeftEdge;
- (BOOL)edgePan:;
- (BOOL)enablePagePanBackGesture;
- (double)panBackGestureLeftEdge;
- (void)setEnablePagePanBackGesture:;
- (void)setPanBackGestureLeftEdge:;
- (id)initWithFrame:collectionViewLayout:;
- (BOOL)gestureRecognizerShouldBegin:;
- (long long)accessibilityElementCount;
@end
