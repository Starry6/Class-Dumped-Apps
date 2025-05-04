@interface AWEVisionSearchDataModel : AWEBaseApiModel
@property (nonatomic) Q dataType;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWESearchMerchandiseResultModel goodsModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)goodsModel;
- (void)setGoodsModel:;
- (void)setDataType:;
- (void).cxx_destruct;
- (unsigned long long)dataType;
+ (id)awemeModelJSONTransformer;
+ (id)goodsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
