@interface AWEIMLifeServiceChatMenuContactInfoModel : MTLModel
@property (nonatomic) AWEIMLifeServiceChatMenuContactCommonModel awemeShop;
@property (nonatomic) AWEIMLifeServiceChatMenuContactCommonModel shopVIP;
@property (nonatomic) AWEIMLifeServiceChatMenuContactCommonModel shopInfo;
@property (nonatomic) AWEIMLifeServiceChatMenuContactCommonModel commodityRecommendInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shopInfo;
- (void)setShopInfo:;
- (id)awemeShop;
- (void)setAwemeShop:;
- (id)shopVIP;
- (void)setShopVIP:;
- (id)commodityRecommendInfo;
- (void)setCommodityRecommendInfo:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
+ (id)shopInfoJSONTransformer;
+ (id)awemeShopJSONTransformer;
+ (id)shopVIPJSONTransformer;
+ (id)commodityRecommendInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
