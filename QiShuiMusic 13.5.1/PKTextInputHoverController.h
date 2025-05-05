@interface PKTextInputHoverController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)hoverController:didBegin:;
- (void)hoverController:didUpdate:;
- (void)hoverControllerDidEnd:;
- (void)hoverControllerDidLift:;
- (void)hoverController:holdGestureMeanInputPoint:latestInputPoint:;
- (void)hoverControllerHoldGestureEnded:;
- (void)unhidePlaceholderElementIfNecessary;
@end
