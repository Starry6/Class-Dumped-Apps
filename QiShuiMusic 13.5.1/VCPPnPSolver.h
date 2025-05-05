@interface VCPPnPSolver : NSObject
@property (nonatomic) {?=[4]} pose;
- (void)dealloc;
- (id)pose;
- (void)setPose:;
- (void)updateIntrinsic:vc:;
- (void)updateFocalLengthInPixels:;
- (id)initWithFocalLengthInPixels:principalPoint:cameraTowardsPositiveZ:;
- (int)getControlPoints;
- (int)computeBarycentricCoordinates;
- (void)computeControlPointsCamera:Vt:;
- (void)computePoints3DCamera;
- (int)computeSVDVt:Vt:;
- (int)computeL6x10:L6x10:;
- (void)computeR6x1:;
- (int)estimateBetasN1:R6x1:betas:;
- (int)estimateBetasN2:R6x1:betas:;
- (int)estimateBetasN3:R6x1:betas:;
- (int)correctSigns;
- (float)computeProjectionError:T:;
- (int)computeRT:T:;
- (int)estimateRT:betas:R:T:projectionError:;
- (int)configureGaussNewton:R6x1:betas:jacobian:residual:;
- (int)optimizeBetas:R6x1:betas:;
- (int)estimatePose:;
- (int)estimateExtrinsicsWith:andPoints3D:andNumPoints:;
@end
