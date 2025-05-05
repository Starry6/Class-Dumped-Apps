@interface ARMLImageTransform : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithScaledSize:useOptimalMSRCoefficients:useExplicitBGRAConversion:;
- (id)fastPassDownscaledResultDataFromImageData:croppedRect:rotation:rotationOfResultTensor:;
- (void)_calculatePreScalingPassesForInputResolution:;
- (id)_preScaleImageData:;
- (void)_prepareSessionAndPoolForRotation:;
- (id)_applyFinalTransformToScaledImage:rotation:finalResultSize:originalImageData:;
@end
