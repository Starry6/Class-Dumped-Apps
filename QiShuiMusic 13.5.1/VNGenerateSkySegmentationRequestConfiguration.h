@interface VNGenerateSkySegmentationRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) q qualityLevel;
@property (nonatomic) I outputPixelFormat;
- (void)setOutputPixelFormat:;
- (unsigned int)outputPixelFormat;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (long long)qualityLevel;
- (void)setQualityLevel:;
@end
