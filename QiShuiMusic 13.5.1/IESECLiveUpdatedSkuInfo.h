@interface IESECLiveUpdatedSkuInfo : MTLModel
@property (nonatomic) NSMutableDictionary skus;
@property (nonatomic) Q skus_Count;
@property (nonatomic) q minPrice;
@property (nonatomic) q maxPrice;
@property (nonatomic) q unuseMinPrice;
@property (nonatomic) q couponPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCouponPrice:;
- (long long)couponPrice;
- (long long)maxPrice;
- (long long)minPrice;
- (void)setMaxPrice:;
- (void)setMinPrice:;
- (void)setSkus:;
- (void)setUnuseMinPrice:;
- (id)skus;
- (unsigned long long)skus_Count;
- (long long)unuseMinPrice;
- (void).cxx_destruct;
+ (id)skusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
