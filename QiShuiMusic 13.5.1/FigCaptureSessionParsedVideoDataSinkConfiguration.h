@interface FigCaptureSessionParsedVideoDataSinkConfiguration : NSObject
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoDataConnectionConfiguration;
@property (nonatomic) FigMetadataObjectCaptureConnectionConfiguration metadataObjectConnectionConfiguration;
@property (nonatomic) FigCaptureSourceConfiguration cameraConfiguration;
@property (nonatomic) NSInteger sourceDeviceType;
- (void)dealloc;
- (int)sourceDeviceType;
- (id)cameraConfiguration;
- (id)videoDataConnectionConfiguration;
- (id)metadataObjectConnectionConfiguration;
@end
