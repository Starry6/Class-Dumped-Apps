@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline
@property (nonatomic) NSString sourceID;
@property (nonatomic) NSInteger sourceDeviceType;
@property (nonatomic) BWPipelineStage pipelineStage;
@property (nonatomic) BWNodeOutput videoAndConvertedDepthDataOutput;
- (void)dealloc;
- (int)sourceDeviceType;
- (id)sourceID;
- (id)pipelineStage;
- (id)initWithConfiguration:sourceOutput:graph:name:delegate:;
- (id)videoAndConvertedDepthDataOutput;
@end
