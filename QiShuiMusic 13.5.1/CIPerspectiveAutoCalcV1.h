@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc
@property (nonatomic) double minimumPitchCorrectionAreaCoverage;
@property (nonatomic) double minimumYawCorrectionAreaCoverage;
@property (nonatomic) float pitchCorrectionAreaCoverage;
@property (nonatomic) float yawCorrectionAreaCoverage;
- (double)confidence;
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
- (void)rangeLimitGradientMap;
- (void)computeGuides;
- (void)computeTransform;
- (double)minimumPitchCorrectionAreaCoverage;
- (void)setMinimumPitchCorrectionAreaCoverage:;
- (double)minimumYawCorrectionAreaCoverage;
- (void)setMinimumYawCorrectionAreaCoverage:;
- (float)pitchCorrectionAreaCoverage;
- (float)yawCorrectionAreaCoverage;
@end
