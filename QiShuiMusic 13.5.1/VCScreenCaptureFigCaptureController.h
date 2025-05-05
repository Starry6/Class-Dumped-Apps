@interface VCScreenCaptureFigCaptureController : VCObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setIsRunning:;
- (void)finalize;
- (void)screenCaptureControllerMediaServicesWereReset:;
- (void)screenCaptureController:didReceiveSampleBuffer:transformFlags:;
- (void)screenCaptureControllerDidReceiveClearScreen:;
- (void)screenCaptureController:didFailWithStatus:;
- (int)startScreenCaptureWithConfig:;
- (int)stopScreenCapture;
- (int)pauseScreenCapture:;
- (id)initWithDelegate:screenCaptureSourceContext:;
- (void)shouldClearScreen:;
- (void)callbackWithEventString:;
- (void)screenCaptureControllerWasPreempted:;
@end
