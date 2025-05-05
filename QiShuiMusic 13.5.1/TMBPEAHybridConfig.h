@interface TMBPEAHybridConfig : TMBPEADataCollectionConfig
@property (nonatomic) NSDictionary contextConfig;
- (id)contextConfig;
- (Class)moduleClass;
- (void)setContextConfig:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
+ (id)configKey;
@end
