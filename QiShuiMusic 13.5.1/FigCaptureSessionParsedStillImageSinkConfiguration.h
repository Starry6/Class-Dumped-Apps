@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject
@property (nonatomic) FigVideoCaptureConnectionConfiguration stillImageConnectionConfiguration;
@property (nonatomic) FigVideoCaptureConnectionConfiguration movieFileVideoConnectionConfiguration;
@property (nonatomic) FigPointCloudDataCaptureConnectionConfiguration pointCloudDataConnectionConfiguration;
- (void)dealloc;
- (id)pointCloudDataConnectionConfiguration;
- (id)movieFileVideoConnectionConfiguration;
- (id)stillImageConnectionConfiguration;
@end
