@interface CSJForwardGestureView : UIView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addPanGestureRecognizer:action:;
- (void)addTapGestureRecognizer:action:;
- (BOOL)gestureRecognizer:shouldReceivePress:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldReceiveEvent:;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizerShouldBegin:;
@end
