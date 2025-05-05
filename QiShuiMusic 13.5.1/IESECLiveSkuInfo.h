@interface IESECLiveSkuInfo : MTLModel
@property (nonatomic) NSString skuId;
@property (nonatomic) q stockNum;
@property (nonatomic) q price;
@property (nonatomic) q couponPrice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCouponPrice:;
- (long long)couponPrice;
- (void)setSkuId:;
- (void)setStockNum:;
- (id)skuId;
- (long long)stockNum;
- (void).cxx_destruct;
- (long long)price;
- (void)setPrice:;
+ (id)JSONKeyPathsByPropertyKey;
@end
