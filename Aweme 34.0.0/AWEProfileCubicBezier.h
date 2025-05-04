@interface AWEProfileCubicBezier : NSObject
- (double)solveCubicBezierCurveWithX:;
- (double)solveCurveX:epsilon:;
- (double)sampleCurveY:;
- (double)sampleCurveX:;
- (double)sampleCurveDerivativeX:;
- (id)initWithControlPoints::::;
@end
