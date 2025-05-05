@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject
@property (nonatomic) FigMetadataObjectCaptureConnectionConfiguration metadataObjectConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration sceneClassifierConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoDataConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoPreviewSinkConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration movieFileVideoConnectionConfiguration;
@property (nonatomic) NSArray movieFileDetectedObjectMetadataConnectionConfigurations;
- (void)dealloc;
- (id)movieFileDetectedObjectMetadataConnectionConfigurations;
- (id)videoDataConnectionConfiguration;
- (id)sceneClassifierConnectionConfiguration;
- (id)metadataObjectConnectionConfiguration;
- (id)videoPreviewSinkConnectionConfiguration;
- (id)movieFileVideoConnectionConfiguration;
@end
