@interface FigCaptureSinkPipeline : FigCapturePipeline
@property (nonatomic) NSString sinkID;
@property (nonatomic) BOOL discardsSampleData;
- (void)dealloc;
- (BOOL)discardsSampleData;
- (id)sinkID;
- (void)setDiscardsSampleData:;
- (id)initWithGraph:name:sinkID:;
- (void)setUpstreamOutput:;
@end
