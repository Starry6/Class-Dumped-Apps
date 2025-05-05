@interface TMBPEADataCollection : TMModule
@property (nonatomic) TMBPEADataCollectionPipeline pipeline;
@property (nonatomic) TMBPEACollectionErrorStrategy errorStrategy;
@property (nonatomic) TMBPEACollectionReports reports;
@property (nonatomic) TMBPEALimit limit;
- (id)reports;
- (id)_dataCollectionConfig;
- (void)_setupErrorStrategy;
- (void)_setupLimit;
- (void)_setupReports;
- (id)errorStrategy;
- (void)setErrorStrategy:;
- (void)setReports:;
- (void)updateWithConfig:;
- (id)limit;
- (void)start;
- (id)initWithConfig:;
- (void)_setupPipelines;
- (void)setLimit:;
- (void).cxx_destruct;
- (id)pipeline;
- (void)setPipeline:;
@end
