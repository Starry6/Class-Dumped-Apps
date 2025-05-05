@interface ADJasperColorPipeline : NSObject
@property (nonatomic) ADJasperColorPipelineParameters pipelineParameters;
- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:andParameters:;
- (id)pipelineParameters;
- (long long)fuseCurrentDepth:previousDepth:intoOutputDepth:currentConfidence:previousConfidence:intoOutputConfidence:currentNormals:previousNormals:intoOutputNormals:usingAlpha:;
- (long long)postProcessConfidence:confidenceOutput:confidenceUnits:;
- (long long)postProcessWithDepth:confidence:depthOutput:confidenceOutput:;
- (long long)warpAndFuseWithCurrDepth:prevDepth:opticalFlow:alphaMap:depthOutput:;
- (long long)warpPreviousDepth:intoCurrentDepth:previousConfidence:intoCurrentConfidence:previousNormals:intoCurrentNormals:usingPoseDelta:previousCalibration:currentCalibration:;
- (long long)projectJasperPoints:cropTo:rotateBy:projectedPointsBuffer:;
- (id)initWithInputPrioritization:;
- (id)LKTTexturesDescriptor;
- (void)setPipelineParameters:;
- (id)processedDepthOutputDescriptor;
- (long long)postProcessDepth:depthOutput:depthUnits:;
- (long long)postProcessDepth:depthOutput:;
- (long long)warpPreviousDepth:intoCurrentDepth:previousConfidence:intoCurrentConfidence:previousNormals:intoCurrentNormals:usingOpticalFlow:;
- (id)processedConfidenceOutputDescriptor;
- (id)processedNormalsOutputDescriptor;
- (long long)postProcessConfidence:confidenceOutput:confidenceUnits:depthUnits:;
- (long long)postProcessWithDepth:confidence:normals:depthOutput:confidenceOutput:normalsOutput:normalsRequiredRotation:;
- (long long)warpAndFuseWithCurrDepth:prevDepth:currNormals:prevNormals:opticalFlow:alphaMap:depthOutput:normalsOutput:;
@end
