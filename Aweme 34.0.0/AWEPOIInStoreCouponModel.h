@interface AWEPOIInStoreCouponModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString priceTitle;
@property (nonatomic) NSString priceSubtitle;
@property (nonatomic) NSString benefitEntityId;
@property (nonatomic) q couponId;
@property (nonatomic) q couponType;
@property (nonatomic) NSString couponTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCouponId:;
- (long long)couponId;
- (long long)couponType;
- (void)setCouponType:;
- (id)priceTitle;
- (id)priceSubtitle;
- (void)setPriceTitle:;
- (void)setPriceSubtitle:;
- (id)benefitEntityId;
- (void)setBenefitEntityId:;
- (id)couponTag;
- (void)setCouponTag:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
