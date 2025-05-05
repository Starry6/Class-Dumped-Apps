@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)captureSessionPreviewTapDidOpen:;
- (void)cameraViewfinderStreamDidOpen:;
- (long long)identifier;
- (void)captureSession:previewTapDidOutputSampleBuffer:;
- (void)_captureSessionDidStop;
- (void)cameraViewfinderStream:didCloseWithStatus:;
- (id)_initWithOwningViewfinder:captureSessionProxy:delegateStorage:;
- (id)viewfinder;
- (void)_captureSessionDidCapturePhotoWithStatus:thumbnailData:timestamp:;
- (void)openPreviewStreamWithOptions:;
- (void)closePreviewStream;
- (void)captureSessionPreviewTapDidClose:;
@end
