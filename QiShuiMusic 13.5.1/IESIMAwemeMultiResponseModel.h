@interface IESIMAwemeMultiResponseModel : IESIMBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray filteredModels;
- (id)awemeList;
- (id)filteredModels;
- (void)setAwemeList:;
- (void)setFilteredModels:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)filteredModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
