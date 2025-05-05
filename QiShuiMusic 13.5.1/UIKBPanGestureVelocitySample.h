@interface UIKBPanGestureVelocitySample : NSObject
@property (nonatomic) {CGPoint=dd} start;
@property (nonatomic) {CGPoint=dd} end;
@property (nonatomic) double dt;
@property (nonatomic) double force;
@property (nonatomic) double majorRadius;
- (void)setEnd:;
- (void)setStart:;
- (id)end;
- (double)force;
- (void)setForce:;
- (id)start;
- (double)dt;
- (void)pullValuesFrom:;
- (double)majorRadius;
- (void)setDt:;
- (void)resetValues;
- (void)setMajorRadius:;
@end
