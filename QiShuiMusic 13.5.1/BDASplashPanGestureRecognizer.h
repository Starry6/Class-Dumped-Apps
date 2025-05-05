@interface BDASplashPanGestureRecognizer : UIPanGestureRecognizer
@property (nonatomic) {CGPoint=dd} beganPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) UIEvent endEvent;
- (id)beganPoint;
- (id)endPoint;
- (void)touchesBegan:withEvent:;
- (id)endEvent;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
@end
