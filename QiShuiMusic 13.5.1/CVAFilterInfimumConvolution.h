@interface CVAFilterInfimumConvolution : ImageSaverRegistrator
- (void)encodeToCommandBuffer:sourceTexture:smallSourceTexture:destinationTexture:orientation:majorRadius:minorRadius:iterations:;
- (void).cxx_destruct;
- (void)encodeInfimumToCommandBufferInternal:sourceTexture:smallSourceTexture:destinationTexture:;
- (id)initWithDevice:library:pipelineLibrary:bufferWidth:bufferHeight:error:;
- (void)encodeToCommandBufferInternal:sourceTexture:destinationTexture:config:;
@end
