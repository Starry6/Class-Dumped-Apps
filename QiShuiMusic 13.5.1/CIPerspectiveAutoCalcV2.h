@interface CIPerspectiveAutoCalcV2 : CIPerspectiveAutoCalc
@property (nonatomic) double unlimitedPitch;
@property (nonatomic) double unlimitedYaw;
@property (nonatomic) double unlimitedRoll;
- (void)dealloc;
- (BOOL)compute;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithContext:image:config:;
- (void)standardizeImage;
- (void)createGradientMap;
- (void)normalizeGradientMap;
- (void)thresholdGradientMap;
- (void)extractLineSegments;
- (void)clusterLineSegments;
- (void)setupCostFunction;
- (float)evaluateCost:;
- (float)evaluateCostXZ:;
- (float)evaluateCostYZ:;
- (void)runOptimization;
- (void)computeConfidence;
- (double)unlimitedPitch;
- (double)unlimitedYaw;
- (double)unlimitedRoll;
@end
