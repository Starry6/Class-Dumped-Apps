@interface ICDocCamPreviewView : UIView
@property (nonatomic) AVCaptureVideoPreviewLayer videoPreviewLayer;
@property (nonatomic) AVCaptureSession session;
- (void)setSession:;
- (id)videoPreviewLayer;
- (id)session;
+ (Class)layerClass;
@end
