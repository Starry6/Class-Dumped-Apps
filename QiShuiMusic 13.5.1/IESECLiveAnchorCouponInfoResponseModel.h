@interface IESECLiveAnchorCouponInfoResponseModel : IESECLiveApiBaseModel
@property (nonatomic) IESECLiveCouponModel coupon;
- (id)coupon;
- (void)setCoupon:;
- (void).cxx_destruct;
+ (id)couponJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
