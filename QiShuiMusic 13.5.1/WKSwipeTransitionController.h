@interface WKSwipeTransitionController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithViewGestureController:gestureRecognizerView:;
- (BOOL)interactiveTransition:gestureRecognizer:shouldReceiveTouch:;
- (BOOL)isNavigationSwipeGestureRecognizer:;
- (void)startInteractiveTransition:;
- (void).cxx_destruct;
- (id)transitionForDirection:;
- (int)directionForTransition:;
- (BOOL)interactiveTransition:gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)invalidate;
- (id).cxx_construct;
- (BOOL)shouldBeginInteractiveTransition:;
- (id)gestureRecognizerForInteractiveTransition:WithTarget:action:;
@end
