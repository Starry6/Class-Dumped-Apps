@interface AWEFeedProgressRefinedFrameSelectionCollectionView : UICollectionView
@property (nonatomic) UIPanGestureRecognizer frameSelectionCollectionPanGesture;
@property (nonatomic) UILongPressGestureRecognizer frameSelectionCollectionLongPressGesture;
@property (nonatomic) UIPinchGestureRecognizer frameSelectionCollectionPinchGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frameSelectionCollectionLongPressGesture;
- (id)frameSelectionCollectionPanGesture;
- (id)frameSelectionCollectionPinchGesture;
- (void)frameSelectionPanPressHandle;
- (void)frameSelectionLongPressHandle;
- (void)frameSelectionPinchHandle;
- (void)setFrameSelectionCollectionPanGesture:;
- (void)setFrameSelectionCollectionLongPressGesture:;
- (void)setFrameSelectionCollectionPinchGesture:;
- (id)initWithFrame:collectionViewLayout:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
@end
