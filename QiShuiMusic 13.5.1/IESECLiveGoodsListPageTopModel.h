@interface IESECLiveGoodsListPageTopModel : IESECLiveApiBaseModel
@property (nonatomic) IESECLiveGoodsModel topGoodsModel;
@property (nonatomic) NSArray tabModels;
@property (nonatomic) NSNumber serverTime;
- (void)setServerTime:;
- (void)setTabModels:;
- (void)setTopGoodsModel:;
- (id)tabModels;
- (id)topGoodsModel;
- (void).cxx_destruct;
- (id)serverTime;
+ (id)tabModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
