@interface AWESearchAIGCCommonDetailDataResponse : AWESearchResultVerticalBaseDataResponse
@property (nonatomic) NSArray leafModels;
@property (nonatomic) AWEGeneralBusinessConfigModel businessConfigModel;
@property (nonatomic) AWEGeneralSearchExtraModel extraModel;
- (id)extraModel;
- (void)setExtraModel:;
- (id)businessConfigModel;
- (void)setLeafModels:;
- (id)leafModels;
- (void)setBusinessConfigModel:;
- (void).cxx_destruct;
+ (id)extraModelJSONTransformer;
+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
