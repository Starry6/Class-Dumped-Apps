@interface AWEPlayletCardInfoModel : AWEBaseApiModel
@property (nonatomic) AWEPlayletInfoModel playletInfoModel;
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) AWECodeGenMoreRelatedInfoModel moreRelatedInfoModel;
@property (nonatomic) NSArray relatedItemTagInfos;
- (id)playletInfoModel;
- (id)awemeModels;
- (void)setPlayletInfoModel:;
- (void)setAwemeModels:;
- (id)moreRelatedInfoModel;
- (void)setMoreRelatedInfoModel:;
- (id)relatedItemTagInfos;
- (void)setRelatedItemTagInfos:;
- (void).cxx_destruct;
+ (id)isEqualBlock;
+ (id)propertyToModelClassInArrayMap;
+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)playletInfoModelJSONTransformer;
@end
