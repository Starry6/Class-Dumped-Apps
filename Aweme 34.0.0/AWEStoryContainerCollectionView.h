@interface AWEStoryContainerCollectionView : UICollectionView
@property (nonatomic) BOOL enableEnterProfile;
@property (nonatomic) BOOL enableGesturePanEdge;
@property (nonatomic) BOOL enableGestureBeginAlways;
@property (nonatomic) {UIEdgeInsets=dddd} gesturePanEdge;
@property (nonatomic) BOOL enableEdgePanWhenBounce;
@property (nonatomic) <AWEStoryContainerHitPassThroughProtocol> throughDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (BOOL)edgePan:;
- (void)setEnableEdgePanWhenBounce:;
- (BOOL)enableEnterProfile;
- (void)setEnableEnterProfile:;
- (BOOL)enableEdgePanWhenBounce;
- (BOOL)enableGestureBeginAlways;
- (void)setEnableGestureBeginAlways:;
- (BOOL)enableGesturePanEdge;
- (void)setEnableGesturePanEdge:;
- (id)gesturePanEdge;
- (void)setGesturePanEdge:;
- (void)setThroughDelegate:;
- (id)throughDelegate;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
