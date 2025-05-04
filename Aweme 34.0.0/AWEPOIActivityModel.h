@interface AWEPOIActivityModel : AWEBaseApiModel
@property (nonatomic) Q couponType;
@property (nonatomic) AWECouponModel couponModel;
- (unsigned long long)couponType;
- (void)setCouponType:;
- (void)setCouponModel:;
- (id)couponModel;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;
@end
