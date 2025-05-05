@interface IESIMVisionSearchDataModel : IESIMBaseApiModel
@property (nonatomic) Q dataType;
@property (nonatomic) IESIMAwemeModel awemeModel;
@property (nonatomic) IESIMSearchMerchandiseResultModel goodsModel;
- (id)awemeModel;
- (id)goodsModel;
- (void)setAwemeModel:;
- (void)setGoodsModel:;
- (void)setDataType:;
- (unsigned long long)dataType;
- (void).cxx_destruct;
+ (id)awemeModelJSONTransformer;
+ (id)goodsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
