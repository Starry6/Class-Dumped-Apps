@interface MPSSVGFDenoiser : NSObject
@property (nonatomic) MPSSVGF svgf;
@property (nonatomic) <MPSSVGFTextureAllocator> textureAllocator;
@property (nonatomic) Q bilateralFilterIterations;
- (void)dealloc;
- (id)initWithDevice:;
- (unsigned long long)bilateralFilterIterations;
- (void)setBilateralFilterIterations:;
- (id)initWithSVGF:textureAllocator:;
- (void)releaseTemporaryTextures;
- (void)clearTemporalHistory;
- (void)encodeClearToCommandBuffer:;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:sourceTexture2:destinationTexture2:motionVectorTexture:depthNormalTexture:previousDepthNormalTexture:;
- (id)encodeToCommandBuffer:sourceTexture:motionVectorTexture:depthNormalTexture:previousDepthNormalTexture:;
- (id)svgf;
- (id)textureAllocator;
@end
