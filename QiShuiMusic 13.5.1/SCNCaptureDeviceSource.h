@interface SCNCaptureDeviceSource : SCNTextureSource
@property (nonatomic) AVCaptureDevice captureDevice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCaptureDevice:;
- (id)captureDevice;
- (void)dealloc;
- (void)captureOutput:didOutputSampleBuffer:fromConnection:;
- (void)cleanup:;
- (id)metalTextureWithEngineContext:textureSampler:nextFrameTime:status:;
- (void)connectToProxy:;
- (void)discardVideoData;
@end
