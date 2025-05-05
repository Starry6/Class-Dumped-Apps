@interface FigCameraViewfinderServer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)cameraViewfinderSession:previewStreamDidCloseWithStatus:;
- (void)cameraViewfinderSession:didCapturePhotoWithStatus:thumbnailData:timestamp:;
- (void)cameraViewfinder:viewfinderSessionDidEnd:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void)cameraViewfinderSessionWillBegin:;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:;
- (void)cameraViewfinder:viewfinderSessionDidBegin:;
+ (void)start;
@end
