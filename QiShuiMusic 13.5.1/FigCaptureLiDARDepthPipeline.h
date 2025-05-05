@interface FigCaptureLiDARDepthPipeline : FigCapturePipeline
@property (nonatomic) BWNodeOutput depthDataSinkOutput;
@property (nonatomic) NSString rgbCameraSourceID;
- (void)dealloc;
- (id)initWithCaptureDevice:cameraInfoByPortType:sensorIDStringsByPortType:depthDataCaptureConnectionConfiguration:videoSourceCaptureOutput:pointCloudOutput:graph:name:rgbCameraSourceID:errorOut:;
- (id)depthDataSinkOutput;
- (int)_buildLiDARDepthPipelineWithVideoSourceCaptureOutput:pointCloudOutput:graph:videoInputDimensions:;
- (id)rgbCameraSourceID;
@end
