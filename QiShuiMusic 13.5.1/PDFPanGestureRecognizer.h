@interface PDFPanGestureRecognizer : UIPanGestureRecognizer
@property (nonatomic) {CGPoint=dd} locationOfFirstTouch;
@property (nonatomic) BOOL didForcePress;
@property (nonatomic) BOOL touchesDidHavePressure;
- (void)touchesBegan:withEvent:;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (id)locationOfFirstTouchInView:;
- (id)locationOfFirstTouch;
- (void)setLocationOfFirstTouch:;
- (BOOL)didForcePress;
- (void)setDidForcePress:;
- (BOOL)touchesDidHavePressure;
- (void)setTouchesDidHavePressure:;
@end
