@interface VideoSource : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) LSGLFramebuffer input_buffer;
@property (nonatomic) BOOL mReduceMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)CreateGLESTextureFromImage:andWidth:andHeight:;
- (void)setMReduceMode:;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)CreateGLESTextureFromI420Image:andWidth:andHeight:andluminanceTexture:andchrominanceTexture:andchromaTexture:;
- (BOOL)CreateGLESTextureFromNv21Image:andWidth:andHeight:andluminanceTexture:andchrominanceTexture:;
- (void)adaptOutputFormatToWidth:height:fps:;
- (int)captureFps;
- (id)capturer:andCMTime:;
- (id)capturer:rotation:timeStampNs:;
- (id)capturer:texture:andCMTime:;
- (void)capturerV2:andCMTime:rotation:purgeFBOnGLError:;
- (void)deliverAndCheckFeedFrame:rotation:timeStampNs:;
- (void)endProcessing;
- (int)fedFrames;
- (id)initWithNativeVideoSource:withReduceMode:;
- (id)initWithNativeVideoSource:withReduceMode:withFeedFrameTargetFps:;
- (id)input_buffer;
- (BOOL)mReduceMode;
- (id)maximumOutputSize;
- (void)needRender:;
- (void)newFrameReadyAtTime:atIndex:;
- (long long)nextAvailableTextureIndex;
- (id)p_FullProcessCaptureFrame:rotation:timeStampNs:;
- (id)p_ReduceProcessCaptureFrame:rotation:timeStampNs:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setInput_buffer:;
- (void)setVideoSourceNil;
- (void)dealloc;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
