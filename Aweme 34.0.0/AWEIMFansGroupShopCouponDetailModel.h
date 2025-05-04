@interface AWEIMFansGroupShopCouponDetailModel : IESIMBaseApiModel
@property (nonatomic) NSString shopId;
@property (nonatomic) NSString shopName;
@property (nonatomic) NSString shopImg;
- (id)shopName;
- (id)shopId;
- (void)setShopName:;
- (void)setShopId:;
- (id)shopImg;
- (void)setShopImg:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
