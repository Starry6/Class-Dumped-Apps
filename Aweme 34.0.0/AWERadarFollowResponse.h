@interface AWERadarFollowResponse : AWEBaseApiModel
@property (nonatomic) q followStatus;
@property (nonatomic) q couponStatus;
@property (nonatomic) AWERadarCouponModel coupon;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)coupon;
- (void)setCoupon:;
- (long long)couponStatus;
- (void)setCouponStatus:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;
@end
