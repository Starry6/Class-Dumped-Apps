@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject
@property (nonatomic) FigCaptureSourceConfiguration cameraConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoPreviewSinkConnectionConfiguration;
@property (nonatomic) NSArray previewDerivedConnectionConfigurations;
@property (nonatomic) NSArray videoCaptureConnectionConfigurations;
@property (nonatomic) NSArray videoDataConnectionConfigurations;
@property (nonatomic) FigVideoCaptureConnectionConfiguration stillImageConnectionConfiguration;
@property (nonatomic) FigDepthDataCaptureConnectionConfiguration depthDataConnectionConfiguration;
@property (nonatomic) NSArray visionDataConnectionConfigurations;
@property (nonatomic) NSArray metadataObjectConnectionConfigurations;
@property (nonatomic) NSArray movieFileDetectedObjectMetadataConnectionConfigurations;
@property (nonatomic) NSArray pointCloudDataConnectionConfigurations;
@property (nonatomic) NSArray cameraCalibrationDataConnectionConfigurations;
- (id)videoCaptureConnectionConfigurations;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)movieFileDetectedObjectMetadataConnectionConfigurations;
- (id)metadataObjectConnectionConfigurations;
- (id)cameraCalibrationDataConnectionConfigurations;
- (id)cameraConfiguration;
- (id)pointCloudDataConnectionConfigurations;
- (id)visionDataConnectionConfigurations;
- (id)videoPreviewSinkConnectionConfiguration;
- (id)previewDerivedConnectionConfigurations;
- (id)stillImageConnectionConfiguration;
- (id)videoDataConnectionConfigurations;
@end
