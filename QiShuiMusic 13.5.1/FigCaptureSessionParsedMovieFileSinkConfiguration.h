@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject
@property (nonatomic) FigVideoCaptureConnectionConfiguration videoConnectionConfiguration;
@property (nonatomic) FigAudioCaptureConnectionConfiguration audioConnectionConfiguration;
@property (nonatomic) FigMetadataItemCaptureConnectionConfiguration cameraDebugInfoMetadataConnectionConfiguration;
@property (nonatomic) NSArray detectedObjectMetadataConnectionConfigurations;
@property (nonatomic) FigDepthDataCaptureConnectionConfiguration depthDataConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration stillImageConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration sceneClassifierConnectionConfiguration;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)videoConnectionConfiguration;
- (id)sceneClassifierConnectionConfiguration;
- (id)detectedObjectMetadataConnectionConfigurations;
- (id)cameraDebugInfoMetadataConnectionConfiguration;
- (id)stillImageConnectionConfiguration;
- (id)audioConnectionConfiguration;
@end
