@interface MPSImageSpatioTemporalGuidedFilter : MPSKernel
@property (nonatomic) Q preallocatedSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:filterDescriptor:;
- (void)encodeToCommandBuffer:sourceTextureArray:guidanceTexture:constraintsTextureArray:numberOfIterations:destinationTextureArray:;
- (void)encodeRegressionToCommandBuffer:sourceTextureArray:guidanceTexture:constraintsTextureArray:numberOfIterations:destinationCoefficientsTextureArray:;
- (void)encodeReconstructionToCommandBuffer:guidanceTexture:coefficientsTextureArray:destinationTextureArray:;
- (id)allocateIntermediateTextureWithDevice:textureDescriptor:;
- (void)allocateResourcesWithDevice:;
- (void)compileKernels;
- (void)encodeReconstructionToCommandBuffer:guidanceTexture:constraintsTexture:coefficientsTextureArray:destinationTexture:;
- (void)encodeReconstructionToCommandBuffer:guidanceTexture:constraintsTextureArray:coefficientsTextureArray:destinationTextureArray:;
- (void)validateCoefficientsTextures:;
- (id)newTemporaryIntermediate:texture:;
- (void)encodeShiftOn:textureArray:by:;
- (void)encodeDownsamplingOn:inputTexture:outputTexture:;
- (unsigned long long)preallocatedSize;
+ (id)libraryInfo:;
@end
