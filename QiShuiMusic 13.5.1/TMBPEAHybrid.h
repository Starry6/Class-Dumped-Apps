@interface TMBPEAHybrid : TMModule
@property (nonatomic) TMBPEAHybridPipeline pipeline;
@property (nonatomic) TMBPEAHybridReporters reporters;
@property (nonatomic) TMBPEAHybridErrorStrategy errorStrategy;
@property (nonatomic) TMBPEAHybridContext bpeaContext;
- (void)setBpeaContext:;
- (id)_hybridConfig;
- (void)_setupBPEAContext;
- (void)_setupErrorStrategy;
- (void)_setupReports;
- (id)bpeaContext;
- (id)errorStrategy;
- (void)setErrorStrategy:;
- (void)updateWithConfig:;
- (void)start;
- (id)initWithConfig:;
- (void)_setupPipelines;
- (void).cxx_destruct;
- (id)pipeline;
- (void)setPipeline:;
- (id)reporters;
- (void)setReporters:;
@end
