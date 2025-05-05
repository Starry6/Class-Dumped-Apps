@interface IESECShopRecommendFeedCardResponse : IESECBaseApiModel
@property (nonatomic) Q cardType;
@property (nonatomic) IESECRelationGoodsModel product;
@property (nonatomic) IESECShopRecommendFeedDividerResponse divider;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:;
- (id)product;
- (void)setProduct:;
- (id)divider;
- (void)setDivider:;
+ (id)JSONKeyPathsByPropertyKey;
@end
