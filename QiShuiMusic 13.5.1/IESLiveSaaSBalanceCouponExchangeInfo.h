@interface IESLiveSaaSBalanceCouponExchangeInfo : BDDynamicMTLModel
@property (nonatomic) NSString prizeId;
@property (nonatomic) IESLiveSaaSBalanceCouponExchangeCostInfo exchangeCostInfo;
@property (nonatomic) IESLiveSaaSBalanceCouponEcomMarketingCouponInfo ecomMarketingCouponInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)prizeId;
- (id)ecomMarketingCouponInfo;
- (void)setEcomMarketingCouponInfo:;
- (void)setPrizeId:;
- (void).cxx_destruct;
+ (id)exchangeCostInfoJSONTransformer;
+ (id)ecomMarketingCouponInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
