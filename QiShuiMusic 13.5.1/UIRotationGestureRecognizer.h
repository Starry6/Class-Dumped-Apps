@interface UIRotationGestureRecognizer : UIGestureRecognizer
@property (nonatomic) double rotation;
@property (nonatomic) double velocity;
- (double)velocity;
- (void)_updateTransformAnalyzerWeights;
- (void)touchesBegan:withEvent:;
- (void)_transformChangedWithEvent:;
- (void)_setPreRecognitionWeight:;
- (id)initWithCoder:;
- (void)setRotation:;
- (id)anchorPoint;
- (double)_postRecognitionWeight;
- (void)_cancelOrFail;
- (id)locationInView:;
- (void)_endOrFail;
- (void).cxx_destruct;
- (double)_preRecognitionWeight;
- (double)rotation;
- (void)_resetGestureRecognizer;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)_setPostRecognitionWeight:;
- (void)touchesCancelled:withEvent:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;
@end
