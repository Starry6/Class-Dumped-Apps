@interface VNRecognizeObjectsRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) BOOL useImageAnalyzerScaling;
@property (nonatomic) float modelMinimumDetectionConfidence;
@property (nonatomic) float modelNonMaximumSuppressionThreshold;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (BOOL)useImageAnalyzerScaling;
- (void)setUseImageAnalyzerScaling:;
- (float)modelMinimumDetectionConfidence;
- (void)setModelMinimumDetectionConfidence:;
- (float)modelNonMaximumSuppressionThreshold;
- (void)setModelNonMaximumSuppressionThreshold:;
@end
