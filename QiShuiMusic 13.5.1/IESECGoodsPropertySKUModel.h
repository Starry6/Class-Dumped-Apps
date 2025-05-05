@interface IESECGoodsPropertySKUModel : MTLModel
@property (nonatomic) NSString skuId;
@property (nonatomic) NSString name;
@property (nonatomic) IESECURLModel pic;
@property (nonatomic) NSArray subProducts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pic;
- (void)setPic:;
- (void)setSubProducts:;
- (void)setSkuId:;
- (id)skuId;
- (id)subProducts;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
+ (id)subProductsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
