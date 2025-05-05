@interface PKMetalPencilShadowRenderer : NSObject
- (void).cxx_destruct;
- (id)initWithDevice:;
- (id)initWithDevice:library:;
- (void)setupWithTexture:minBlur:maxBlur:;
- (id)renderInto:commandBuffer:position:azimuth:altitude:height:alpha:scale:clearFramebuffer:grayscale:;
@end
