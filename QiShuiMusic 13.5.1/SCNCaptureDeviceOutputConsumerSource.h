@interface SCNCaptureDeviceOutputConsumerSource : SCNTextureSource
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (void)cleanup:;
- (void)setSampleBuffer:;
- (void)setPixelBuffer:;
- (id)metalTextureWithEngineContext:textureSampler:nextFrameTime:status:;
- (void)connectToProxy:;
- (void)discardVideoData;
- (void)setSampleBuffer:fromDevice:;
- (void)setPixelBuffer:fromDevice:;
- (BOOL)containsAlpha;
@end
