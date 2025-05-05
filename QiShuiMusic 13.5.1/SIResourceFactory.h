@interface SIResourceFactory : NSObject
@property (nonatomic) <MTLLibrary> library;
@property (nonatomic) <MTLDevice> device;
- (id)commandBuffer;
- (id)newFunctionWithName:;
- (id)newFunctionWithName:constantValues:error:;
- (id)library;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (id)device;
- (id)newComputePipelineStateWithName:;
- (id)newComputePipelineStateWithName:constantValues:error:;
- (id)newCubemapWithFormat:;
- (id)newTextureWithFormat:;
- (id)newTextureWithWidth:height:pixelFormat:;
- (id)newIOSurfaceBackedTextureWithWidth:height:pixelFormat:;
- (id)newTextureFromPixelBuffer:;
- (id)newTextureFromIOSurface:;
- (id)dictionaryFromTexture:;
@end
