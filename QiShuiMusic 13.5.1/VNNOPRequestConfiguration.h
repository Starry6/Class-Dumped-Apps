@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) VNSupportedImageSize detectorPreferredImageSize;
@property (nonatomic) BOOL detectorWantsAnisotropicScaling;
@property (nonatomic) double detectorExecutionTimeInterval;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (id)detectorPreferredImageSize;
- (void)setDetectorPreferredImageSize:;
- (BOOL)detectorWantsAnisotropicScaling;
- (void)setDetectorWantsAnisotropicScaling:;
- (double)detectorExecutionTimeInterval;
- (void)setDetectorExecutionTimeInterval:;
@end
