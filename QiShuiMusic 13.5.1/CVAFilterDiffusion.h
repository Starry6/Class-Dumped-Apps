@interface CVAFilterDiffusion : ImageSaverRegistrator
- (void)encodeDavidIterationToCommandBufferInternal:priorTexture:confidenceTexture:sourceTexture:destinationTexture:;
- (void)encodeEdgeLaplacianToCommandBuffer:colorTexture:outputLaplacian:;
- (id)initWithDevice:library:pipelineLibrary:bufferWidth:bufferHeight:edgeVariance:stepSize:error:;
- (void)encodeToCommandBufferInternal:sourceTexture:destinationTexture:;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:colorTexture:iterations:;
- (void)encodeToCommandBuffer:priorTexture:sourceTexture:destinationTexture:diffusionMapTexture:confidenceTexture:iterations:;
- (void)encodeDiffusionMapLaplacianToCommandBuffer:diffusionMapTexture:outputLaplacian:;
- (void).cxx_destruct;
@end
