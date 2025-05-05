@interface FigCameraViewfinderRemote : FigCameraViewfinder
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)viewfinderSessionDidEnd;
- (void)viewfinderSessionWillBegin;
- (void)viewfinderSession:didCapturePhotoWithStatus:thumbnailData:timestamp:;
- (void)viewfinderSessionPreviewStreamDidOpen:;
- (void)startWithOptions:;
- (void)viewfinderSessionDidBegin:withIdentifier:;
- (void)viewfinderSession:previewStreamDidCloseWithStatus:;
+ (id)remoteObjectCallbacksInterface;
+ (id)cameraViewfinder;
@end
