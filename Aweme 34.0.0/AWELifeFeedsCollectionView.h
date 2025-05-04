@interface AWELifeFeedsCollectionView : UICollectionView
@property (nonatomic) BOOL recognizeSimultaneouslyPanGesture;
- (BOOL)recognizeSimultaneouslyPanGesture;
- (void)setRecognizeSimultaneouslyPanGesture:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
@end
