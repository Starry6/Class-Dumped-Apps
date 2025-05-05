@interface TMBPEADataCollectionConfig : TMModuleConfig
@property (nonatomic) NSArray pipelines;
@property (nonatomic) NSDictionary errorStrategy;
@property (nonatomic) NSDictionary limit;
- (id)errorStrategy;
- (Class)moduleClass;
- (void)setErrorStrategy:;
- (id)limit;
- (id)initWithDictionary:;
- (id)pipelines;
- (void)setLimit:;
- (void).cxx_destruct;
- (void)setPipelines:;
+ (id)configKey;
@end
