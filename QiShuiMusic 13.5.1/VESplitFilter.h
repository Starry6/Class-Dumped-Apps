@interface VESplitFilter : HTSGLFilter
- (void)informTargetsAboutNewFrameAtTime:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputFramebufferForTarget:atIndex:;
- (id)initWithContext:;
@end
