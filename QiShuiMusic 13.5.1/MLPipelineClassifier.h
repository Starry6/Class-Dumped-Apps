@interface MLPipelineClassifier : MLClassifier
@property (nonatomic) MLPipeline engine;
@property (nonatomic) MLPipeline pipeline;
- (id)engine;
- (void)enableInstrumentsTracing;
- (void)setEngine:;
- (id)classify:options:error:;
- (id)initWithEngine:description:configuration:error:;
- (void).cxx_destruct;
- (id)pipeline;
@end
