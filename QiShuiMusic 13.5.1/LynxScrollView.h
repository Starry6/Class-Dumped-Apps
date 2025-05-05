@interface LynxScrollView : UIScrollView
@property (nonatomic) BOOL forceCanScroll;
@property (nonatomic) # blockGestureClass;
@property (nonatomic) q recognizedViewTag;
@property (nonatomic) LynxUIScroller weakUIScroller;
- (Class)blockGestureClass;
- (BOOL)forceCanScroll;
- (long long)recognizedViewTag;
- (void)setBlockGestureClass:;
- (void)setForceCanScroll:;
- (void)setRecognizedViewTag:;
- (void)setWeakUIScroller:;
- (id)weakUIScroller;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void).cxx_destruct;
- (void)updateContentSize;
@end
