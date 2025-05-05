@interface HTSGLFilterTwoPass : HTSGLFilter
- (id)framebufferForOutput;
- (void)initializeRenderer:;
- (void)initializeSecondaryAttributes;
- (void)removeOutputFramebuffer;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
