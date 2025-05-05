@interface FigCaptureMovieFileSinkMiddlePipelineConfiguration : NSObject
@property (nonatomic) FigCaptureMovieFileSinkPipelineConfiguration movieFileSinkPipelineConfiguration;
@property (nonatomic) BWPipelineStage movieFilePipelineStage;
- (id)init;
- (void)dealloc;
- (id)movieFilePipelineStage;
- (id)movieFileSinkPipelineConfiguration;
- (void)setMovieFileSinkPipelineConfiguration:;
- (void)setMovieFilePipelineStage:;
@end
