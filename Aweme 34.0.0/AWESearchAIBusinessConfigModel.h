@interface AWESearchAIBusinessConfigModel : AWEBaseApiModel
@property (nonatomic) AWESearchAdModel adModel;
@property (nonatomic) AWEGeneralSearchBackgroundModel searchBackgroundConfig;
- (id)adModel;
- (void)setAdModel:;
- (id)searchBackgroundConfig;
- (void)setSearchBackgroundConfig:;
- (void).cxx_destruct;
+ (id)searchBackgroundConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
