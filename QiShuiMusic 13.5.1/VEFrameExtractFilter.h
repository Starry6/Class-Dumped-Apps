@interface VEFrameExtractFilter : HTSGLFilter
@property (nonatomic) VEFilterFrameExtractor frameExtrator;
- (void)addFrameExtractDriver:;
- (id)frameExtrator;
- (void)informTargetsAboutNewFrameAtTime:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)setFrameExtrator:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputFramebufferForTarget:atIndex:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
