@interface Sku : IESLivePBBaseMessage
@property (nonatomic) SkuPriceInfo priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (nonatomic) NSInteger skuType;
@property (nonatomic) NSString skuId;
@property (nonatomic) NSString id_p;
@property (nonatomic) NSInteger subType;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString claimDdl;
+ (id)descriptor;
@end
