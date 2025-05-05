@interface FigCaptureMovieFileSinkHeadPipelineConfiguration : NSObject
@property (nonatomic) FigCaptureMovieFileSinkPipelineConfiguration movieFileSinkPipelineConfiguration;
@property (nonatomic) BWPipelineStage movieFilePipelineStage;
@property (nonatomic) BWPipelineStage transferPipelineStage;
@property (nonatomic) NSInteger visMotionMetadataPreloadingMode;
- (void)dealloc;
- (id)movieFilePipelineStage;
- (id)transferPipelineStage;
- (void)setVisMotionMetadataPreloadingMode:;
- (id)movieFileSinkPipelineConfiguration;
- (void)setMovieFileSinkPipelineConfiguration:;
- (void)setTransferPipelineStage:;
- (void)setMovieFilePipelineStage:;
- (int)visMotionMetadataPreloadingMode;
@end
