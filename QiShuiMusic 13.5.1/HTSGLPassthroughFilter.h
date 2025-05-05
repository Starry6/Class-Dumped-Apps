@interface HTSGLPassthroughFilter : HTSGLFilter
- (void)forceProcessingAtSize:;
- (void)forceProcessingAtSizeRespectingAspectRatio:;
- (void)informTargetsAboutNewFrameAtTime:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputFramebufferForTarget:atIndex:;
- (void)setInputRotation:atIndex:;
@end
