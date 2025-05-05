@interface FigCaptureSessionParsedLiDARDepthPipelineConfiguration : NSObject
@property (nonatomic) FigCaptureSourceConfiguration timeOfFlightCameraConfiguration;
@property (nonatomic) FigDepthDataCaptureConnectionConfiguration depthDataConnectionConfiguration;
- (void)dealloc;
- (id)depthDataConnectionConfiguration;
- (id)initWithTimeOfFlightCameraConfiguration:depthDataConnectionConfiguration:;
- (id)timeOfFlightCameraConfiguration;
@end
