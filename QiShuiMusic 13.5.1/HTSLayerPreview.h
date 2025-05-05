@interface HTSLayerPreview : UIView
@property (nonatomic) AVCaptureVideoPreviewLayer videoPreviewLayer;
@property (nonatomic) AVCaptureSession session;
- (void)setSession:;
- (void)setVideoGravity:;
- (id)videoPreviewLayer;
- (id)session;
+ (Class)layerClass;
@end
