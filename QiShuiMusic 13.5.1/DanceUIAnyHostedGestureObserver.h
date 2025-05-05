@interface DanceUIAnyHostedGestureObserver : UIGestureRecognizer
@property (nonatomic) <UIGestureRecognizerDelegate> delegate;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
@end
