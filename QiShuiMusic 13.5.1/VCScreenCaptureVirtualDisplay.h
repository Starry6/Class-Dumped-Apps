@interface VCScreenCaptureVirtualDisplay : VCObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)finalize;
- (int)startScreenCaptureWithConfig:;
- (int)stopScreenCapture;
- (int)pauseScreenCapture:;
- (id)initWithDelegate:screenCaptureSourceContext:;
- (int)setupCaptureSession:;
- (void)shouldClearScreen:;
- (void)callbackWithEventString:;
@end
