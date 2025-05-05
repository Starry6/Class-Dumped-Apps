@interface IESECGoodsDetailShopRecommendReponse : IESECBaseApiModel
@property (nonatomic) NSArray shopRecommendGoods;
@property (nonatomic) NSString shopUrl;
- (id)shopUrl;
- (void)setShopRecommendGoods:;
- (void)setShopUrl:;
- (id)shopRecommendGoods;
- (void).cxx_destruct;
+ (id)shopRecommendGoodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
