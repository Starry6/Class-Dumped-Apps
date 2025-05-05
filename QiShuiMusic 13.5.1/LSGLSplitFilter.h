@interface LSGLSplitFilter : LSGLFilter
- (id)outputFramebufferWithTextureId:;
- (void)informTarget:aboutNewFrame:atTime:;
- (id)leftoutputFrameSize;
- (void)needRender:;
- (void)newFrameReadyAtTime:atIndex:;
- (id)rightoutputFrameSize;
- (void)setInputFramebuffer:atIndex:;
- (void)setSplitRect:forTarget:isLeft:;
- (void)updateTextureCoordinate;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)removeTarget:;
@end
