@interface CVAFilterAlphaBlend : ImageSaverAndFileConfigRegistrator
- (void)encodeAlphaBlendToCommandBuffer:inTexFirst:inTexSecond:outTex:alpha:;
- (void).cxx_destruct;
- (id)getTexturePlanesFromPixelBuffer:usage:;
- (id)initWithMetalContext:;
- (void)alphaBlendPixelBuffer:inPixelBufferSecond:outPixelBuffer:alpha:callbackQueue:callback:;
@end
