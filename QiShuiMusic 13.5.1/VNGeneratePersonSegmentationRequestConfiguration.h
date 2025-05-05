@interface VNGeneratePersonSegmentationRequestConfiguration : VNStatefulRequestConfiguration
@property (nonatomic) Q qualityLevel;
@property (nonatomic) I outputPixelFormat;
@property (nonatomic) BOOL useTiling;
@property (nonatomic) BOOL keepRawOutputMask;
- (void)setOutputPixelFormat:;
- (unsigned int)outputPixelFormat;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)qualityLevel;
- (void)setQualityLevel:;
- (BOOL)useTiling;
- (void)setUseTiling:;
- (BOOL)keepRawOutputMask;
- (void)setKeepRawOutputMask:;
@end
