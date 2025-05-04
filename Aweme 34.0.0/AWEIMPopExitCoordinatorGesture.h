@interface AWEIMPopExitCoordinatorGesture : UIPanGestureRecognizer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)gestureRecognizerShouldResponse:;
- (id)initWithTarget:action:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
@end
