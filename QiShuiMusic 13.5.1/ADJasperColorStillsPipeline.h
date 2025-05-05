@interface ADJasperColorStillsPipeline : NSObject
@property (nonatomic) ADJasperColorStillsPipelineParameters pipelineParameters;
- (id)init;
- (id)initWithParameters:;
- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)pipelineParameters;
- (long long)projectJasperPoints:cropTo:rotateBy:projectedPointsBuffer:;
- (void)setPipelineParameters:;
- (id)processedDepthOutputDescriptor;
- (long long)postProcessWithDepth:depthOutput:;
- (id)correctionBackendInferenceDescriptor;
- (id)correctionFrontendInferenceDescriptor;
- (long long)projectJasperPointsForJasperToColorTransformCorrection:cropTo:rotateBy:projectedPointsBuffer:;
- (long long)postProcessDepth:depthOutput:depthUnits:;
- (long long)postProcessJasperToColorTransformCorrection:originalTransform:correctedTransform:;
- (long long)processJasperToColorCorrectionIntermediateResultWithBackendEspressoFeaturesOutput:frontendEspressoFeaturesInput:featuresDimensions:;
- (long long)postProcessJasperToColorCorrectionWithAngles:errors:originalTransform:correctedTransform:colorCameraCalibration:colorImageScale:transformCorrectionResults:;
@end
