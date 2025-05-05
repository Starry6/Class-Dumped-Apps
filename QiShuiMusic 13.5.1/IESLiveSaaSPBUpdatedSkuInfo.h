@interface IESLiveSaaSPBUpdatedSkuInfo : GPBMessage
@property (nonatomic) NSMutableDictionary skus;
@property (nonatomic) Q skus_Count;
@property (nonatomic) q minPrice;
@property (nonatomic) q maxPrice;
@property (nonatomic) q unuseMinPrice;
@property (nonatomic) q couponPrice;
+ (id)descriptor;
@end
