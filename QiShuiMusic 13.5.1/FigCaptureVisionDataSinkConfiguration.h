@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) float maxFrameRate;
@property (nonatomic) float maxBurstFrameRate;
@property (nonatomic) {?=qiIq} maxBurstDuration;
@property (nonatomic) I gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) I maxKeypointsCount;
@property (nonatomic) float keypointDetectionThreshold;
@property (nonatomic) BOOL featureBinningEnabled;
@property (nonatomic) BOOL featureOrientationAssignmentEnabled;
@property (nonatomic) BOOL dynamicThresholdingEnabled;
@property (nonatomic) I keypointDetectionFlowType;
@property (nonatomic) Q subPixelThreshold;
@property (nonatomic) BOOL featureMatchingEnabled;
@property (nonatomic) NSInteger featureMatchingDescriptorSize;
@property (nonatomic) float orientationDistanceThreshold;
@property (nonatomic) float sigmaDistanceThreshold;
@property (nonatomic) float squareDistanceDisparityFraction;
@property (nonatomic) Q hammingDistanceThreshold;
@property (nonatomic) NSData laccConfigAndMetadata;
@property (nonatomic) NSDictionary embeddedCaptureDeviceConfiguration;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (int)sinkType;
- (void)setMaxFrameRate:;
- (id)description;
- (float)maxFrameRate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMaxBurstFrameRate:;
- (id)maxBurstDuration;
- (unsigned int)gaussianPyramidOctavesCount;
- (float)gaussianPyramidBaseOctaveDownscalingFactor;
- (unsigned int)maxKeypointsCount;
- (BOOL)featureBinningEnabled;
- (BOOL)featureOrientationAssignmentEnabled;
- (unsigned int)keypointDetectionFlowType;
- (unsigned long long)subPixelThreshold;
- (int)featureMatchingDescriptorSize;
- (float)orientationDistanceThreshold;
- (float)sigmaDistanceThreshold;
- (float)squareDistanceDisparityFraction;
- (unsigned long long)hammingDistanceThreshold;
- (id)laccConfigAndMetadata;
- (float)keypointDetectionThreshold;
- (void)setMaxBurstDuration:;
- (void)setGaussianPyramidOctavesCount:;
- (void)setGaussianPyramidBaseOctaveDownscalingFactor:;
- (void)setMaxKeypointsCount:;
- (void)setFeatureBinningEnabled:;
- (void)setFeatureOrientationAssignmentEnabled:;
- (BOOL)isDynamicThresholdingEnabled;
- (void)setDynamicThresholdingEnabled:;
- (void)setKeypointDetectionFlowType:;
- (void)setSubPixelThreshold:;
- (BOOL)isFeatureMatchingEnabled;
- (void)setFeatureMatchingEnabled:;
- (void)setFeatureMatchingDescriptorSize:;
- (void)setOrientationDistanceThreshold:;
- (void)setSigmaDistanceThreshold:;
- (void)setSquareDistanceDisparityFraction:;
- (void)setHammingDistanceThreshold:;
- (void)setLaccConfigAndMetadata:;
- (void)setKeypointDetectionThreshold:;
- (id)embeddedCaptureDeviceConfiguration;
- (float)maxBurstFrameRate;
@end
