@interface ARPersonOcclusionTechnique : ARTechnique
- (id)init;
- (void)dealloc;
- (BOOL)isBusy;
- (void).cxx_destruct;
- (id)_fullDescription;
- (id).cxx_construct;
- (void)requestResultDataAtTimestamp:context:;
- (int)postProcessSegmentation:depthData:depthDataSource:detectionData:pResultingDepthBuffer:;
- (int)_minFilterDepthMap:kernelSize:pResultBuffer:;
+ (float)_confidenceForDepthData:location:;
@end
