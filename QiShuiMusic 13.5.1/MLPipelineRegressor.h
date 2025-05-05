@interface MLPipelineRegressor : MLRegressor
@property (nonatomic) MLPipeline engine;
@property (nonatomic) MLPipeline pipeline;
- (id)engine;
- (void)enableInstrumentsTracing;
- (id)regress:options:error:;
- (void)setEngine:;
- (id)initWithEngine:description:configuration:error:;
- (void).cxx_destruct;
- (id)pipeline;
@end
