@interface TMBPEADataCollectionPipeline : NSObject
@property (nonatomic) NSArray config;
- (id)getUnitWithConfig:;
- (id)pipelineUnits;
- (Class)strtegyUnit:;
- (void)setConfig:;
- (void)setup;
- (void).cxx_destruct;
- (id)config;
+ (id)defaultPipelines;
@end
