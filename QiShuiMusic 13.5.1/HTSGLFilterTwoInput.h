@interface HTSGLFilterTwoInput : HTSGLFilter
@property (nonatomic) BOOL isCustomSecond;
@property (nonatomic) HTSGLFramebuffer blendFramebuffer;
- (void)setBlendSecond:;
- (id)blendFramebuffer;
- (void)disableFirstFrameCheck;
- (void)disableSecondFrameCheck;
- (void)initializeRenderer:;
- (BOOL)isCustomSecond;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (id)rotatedSize:forIndex:;
- (void)setBlendFramebuffer:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setIsCustomSecond:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)initializeAttributes;
@end
