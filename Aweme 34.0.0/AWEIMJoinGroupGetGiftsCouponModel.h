@interface AWEIMJoinGroupGetGiftsCouponModel : AWEBaseApiModel
@property (nonatomic) AWEIMFansGroupCouponModel couponModel;
@property (nonatomic) q status;
- (void)setCouponModel:;
- (id)couponModel;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
+ (id)couponModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
