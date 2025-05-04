@interface AWESearchEpidemicStatisticModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSArray itemModels;
- (void)setSchemaURL:;
- (id)schemaURL;
- (void)setItemModels:;
- (id)itemModels;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)itemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
