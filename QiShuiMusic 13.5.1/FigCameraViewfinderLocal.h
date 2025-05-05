@interface FigCameraViewfinderLocal : FigCameraViewfinder
@property (nonatomic) NSInteger photoThumbnailMaxDimension;
@property (nonatomic) BOOL photoThumbnailQualitySpecified;
@property (nonatomic) float photoThumbnailQuality;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (float)photoThumbnailQuality;
- (void)captureSessionDidStop:;
- (BOOL)photoThumbnailQualitySpecified;
- (void)stop;
- (void)captureSession:didCapturePhotoWithStatus:thumbnailData:timestamp:;
- (void)captureSessionDidStart:;
- (int)photoThumbnailMaxDimension;
- (void)captureSessionWillStart;
- (void)startWithOptions:;
+ (id)cameraViewfinder;
@end
