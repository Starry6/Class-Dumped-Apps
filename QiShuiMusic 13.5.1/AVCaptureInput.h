@interface AVCaptureInput : NSObject
@property (nonatomic) NSArray ports;
- (void)setSession:;
- (id)clock;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:;
- (void)attachSafelyToFigCaptureSession:;
- (void)handleChangedActiveFormat:forDevice:;
- (void)attachToFigCaptureSession:;
- (id)videoDevice;
- (id)session;
- (void)detachFromFigCaptureSession:;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:;
- (id)ports;
- (id)initSubclass;
@end
