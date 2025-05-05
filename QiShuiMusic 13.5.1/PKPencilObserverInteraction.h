@interface PKPencilObserverInteraction : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (id)view;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)setView:;
- (id).cxx_construct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)hoverController:didBegin:;
- (void)hoverController:didUpdate:;
- (void)hoverControllerDidEnd:;
- (void)hoverController:intentionalHoverWithDuration:;
- (void)disableOpacityOverride;
- (void)pencilObserver:didBeginAtPoint:;
- (void)pencilObserver:didMoveToPoint:;
- (void)pencilObserverDidEnd:;
@end
