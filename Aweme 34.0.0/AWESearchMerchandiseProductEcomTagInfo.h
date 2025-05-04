@interface AWESearchMerchandiseProductEcomTagInfo : AWEBaseApiModel
@property (nonatomic) BOOL isGroupBuy;
@property (nonatomic) q applyCoupon;
@property (nonatomic) BOOL isMultiSKU;
- (BOOL)isGroupBuy;
- (void)setIsGroupBuy:;
- (long long)applyCoupon;
- (void)setApplyCoupon:;
- (BOOL)isMultiSKU;
- (void)setIsMultiSKU:;
+ (id)applyCouponJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
