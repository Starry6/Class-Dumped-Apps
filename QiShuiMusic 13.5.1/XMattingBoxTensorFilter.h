@interface XMattingBoxTensorFilter : NSObject
- (int)_compileShadersWithLibrary:;
- (void)releaseResources;
- (void).cxx_destruct;
- (int)allocateResources:;
- (id)initWithDevice:library:;
- (int)encodeSeparableSlidingStackOnCommandBuffer:sourceTexture:destinationTexture:;
- (int)encodeOnCommandBuffer:sourceTexture:destinationTexture:;
+ (id)supportedPixelFormats;
@end
