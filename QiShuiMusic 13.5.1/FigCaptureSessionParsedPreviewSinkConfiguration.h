@interface FigCaptureSessionParsedPreviewSinkConfiguration : NSObject
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoPreviewSinkConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoThumbnailConnectionConfiguration;
@property (nonatomic) FigDepthDataCaptureConnectionConfiguration depthDataConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration previewTimeMachineConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration sceneClassifierConnectionConfiguration;
@property (nonatomic) FigMetadataObjectCaptureConnectionConfiguration metadataObjectConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration stillImageConnectionConfiguration;
@property (nonatomic) FigCaptureSourceConfiguration cameraConfiguration;
@property (nonatomic) NSInteger sourceDeviceType;
- (void)dealloc;
- (int)sourceDeviceType;
- (id)depthDataConnectionConfiguration;
- (id)cameraConfiguration;
- (id)sceneClassifierConnectionConfiguration;
- (id)metadataObjectConnectionConfiguration;
- (id)videoPreviewSinkConnectionConfiguration;
- (id)previewTimeMachineConnectionConfiguration;
- (id)stillImageConnectionConfiguration;
- (id)videoThumbnailConnectionConfiguration;
@end
