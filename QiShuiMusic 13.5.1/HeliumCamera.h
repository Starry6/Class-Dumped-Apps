@interface HeliumCamera : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCameraConfig;
- (BOOL)disposeCamera;
- (id)requestCameraWithConfig:;
- (void)setCameraZoom:;
- (void)stopRunningWithCaptureSession:;
- (void).cxx_destruct;
- (id)initWithCallback:;
- (BOOL)pauseCamera;
- (BOOL)resumeCamera;
@end
