@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline
@property (nonatomic) FigCaptureVISPipeline visPipeline;
@property (nonatomic) FigCaptureVISPipeline overCaptureVISPipeline;
- (void)dealloc;
- (id)metadataOutputsForTailIndex:;
- (id)visPipeline;
- (id)videoOutputForTailIndex:;
- (id)audioOutputForTailIndex:;
- (id)overCaptureVISPipeline;
- (id)initWithConfiguration:graph:parentPipeline:headPipeline:captureDevice:workgroup:;
@end
