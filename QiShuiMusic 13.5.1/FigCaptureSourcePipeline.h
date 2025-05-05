@interface FigCaptureSourcePipeline : FigCapturePipeline
@property (nonatomic) NSString sourceID;
- (void)dealloc;
- (id)sourceID;
- (id)initWithGraph:name:sourceID:;
@end
