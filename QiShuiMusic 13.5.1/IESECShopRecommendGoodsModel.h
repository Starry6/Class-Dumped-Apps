@interface IESECShopRecommendGoodsModel : MTLModel
@property (nonatomic) IESECShopRecommendGoodsBaseInfo baseInfo;
@property (nonatomic) IESECShopRecommendAdditionInfo additionInfo;
@property (nonatomic) IESECGoodsPrice price;
@property (nonatomic) double cardWidth;
@property (nonatomic) NSString shopUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shopUrl;
- (id)additionInfo;
- (id)baseInfo;
- (void)setAdditionInfo:;
- (void)setBaseInfo:;
- (void)setShopUrl:;
- (void).cxx_destruct;
- (id)price;
- (void)setPrice:;
- (double)cardWidth;
- (void)setCardWidth:;
+ (id)JSONKeyPathsByPropertyKey;
@end
