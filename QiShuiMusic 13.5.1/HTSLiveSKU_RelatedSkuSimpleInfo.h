@interface HTSLiveSKU_RelatedSkuSimpleInfo : IESLivePBBaseMessage
@property (nonatomic) NSString skuId;
@property (nonatomic) NSString productId;
+ (id)descriptor;
@end
