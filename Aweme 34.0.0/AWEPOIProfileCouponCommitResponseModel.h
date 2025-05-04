@interface AWEPOIProfileCouponCommitResponseModel : AWEPOIProfileCouponResponseModel
@property (nonatomic) AWEPOIInStoreCouponPageModel couponPage;
@property (nonatomic) q followStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)couponPage;
- (void)setCouponPage:;
- (void).cxx_destruct;
+ (id)followStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
