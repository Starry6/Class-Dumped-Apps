@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer
@property (nonatomic) BOOL pinchDetected;
@property (nonatomic) double initialPinchSeparation;
@property (nonatomic) <UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate;
- (BOOL)pinchDetected;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
- (void)resetPinchCalculations;
- (void)interpretTouchesForSplit;
- (double)finalProgressForInitialProgress:;
- (id)pinchDelegate;
- (void)setPinchDelegate:;
- (double)initialPinchSeparation;
@end
