@interface LynxUICollectionView : UICollectionView
@property (nonatomic) LynxListScrollEventEmitter scrollEventEmitter;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL disableAnimationDuringLayout;
@property (nonatomic) q bounceForbiddenDirection;
- (long long)bounceForbiddenDirection;
- (BOOL)disableAnimationDuringLayout;
- (id)scrollEventEmitter;
- (void)setBounceForbiddenDirection:;
- (void)setDisableAnimationDuringLayout:;
- (void)setScrollEventEmitter:;
- (void)setContentOffset:;
- (void)setName:;
- (void)layoutSubviews;
- (void)scrollToItemAtIndexPath:atScrollPosition:animated:;
- (void)setContentOffset:animated:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (id)name;
@end
