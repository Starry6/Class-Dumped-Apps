@interface VEAmazingFrameExtractor : VEFilterFrameExtractor
@property (nonatomic) <IVEAmazingEffectProtocol> renderer;
@property (nonatomic) HTSGLFramebuffer inputFramebuffer;
- (void)extractTexture:outputSize:time:;
- (void)enableFeatures:;
- (void)disableFeatures:;
- (id)init:context:;
- (id)inputFramebuffer;
- (void)processWithDriver:frameBuffer:atTime:;
- (void)setInputFramebuffer:;
- (void)setRenderer:;
- (id)renderer;
- (void).cxx_destruct;
@end
