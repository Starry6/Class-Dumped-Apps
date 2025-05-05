@interface ADJasperColorV2Pipeline : NSObject
@property (nonatomic) ADJasperColorV2PipelineParameters pipelineParameters;
- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)pipelineParameters;
- (id)initWithInputPrioritization:espressoEngine:;
- (id)initWithInputPrioritization:espressoEngine:andParameters:;
- (long long)projectJasperPoints:cropTo:rotateBy:projectedPointsBuffer:filteredPoints:;
- (long long)changePointCloudPOV:targetCamera:jasperToCameraTransform:outputPointCloud:;
- (long long)postProcessDepth:uncertainty:filteredPointCloud:outputDepth:outputUncertainty:depthRoi:;
- (long long)postProcessDepth:output:;
- (long long)postProcessDepth:output:depthRoi:;
- (long long)postProcessUncertainty:outputConfidence:confidenceUnits:;
- (void)setPipelineParameters:;
@end
