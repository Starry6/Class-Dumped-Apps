@interface MPSTemporalAA : MPSKernel
@property (nonatomic) float blendFactor;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithDevice:;
- (id)params;
- (float)blendFactor;
- (void)setBlendFactor:;
- (unsigned long long)channelCount:;
- (id)getHashForKernelID:haveMotionVectorTexture:haveDepthTexture:;
- (id)getPipelineForFunctionName:kernelID:haveMotionVectorTexture:haveDepthTexture:;
- (void)encodeToCommandBuffer:sourceTexture:previousTexture:destinationTexture:motionVectorTexture:depthTexture:;
+ (BOOL)supportsSecureCoding;
+ (id)libraryInfo:;
@end
