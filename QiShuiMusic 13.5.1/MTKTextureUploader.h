@interface MTKTextureUploader : NSObject
- (void)dealloc;
- (void)generateMipmapsForTexture:;
- (void)finishWithCompletionHandler:;
- (id)initWithDevice:commandQueue:notifyQueue:;
- (void)copyBytes:toTexture:bitsPerPixel:pixelComponents:bytesPerRow:bytesPerImage:region:slice:level:flipVertically:;
- (void)copyTexture:toTexture:;
- (id)newTextureWithData:options:;
@end
