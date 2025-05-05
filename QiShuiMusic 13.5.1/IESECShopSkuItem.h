@interface IESECShopSkuItem : MTLModel
@property (nonatomic) NSString longImage;
@property (nonatomic) NSString standardImage;
@property (nonatomic) NSString skuId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)longImage;
- (void)setLongImage:;
- (void)setSkuId:;
- (void)setStandardImage:;
- (id)skuId;
- (id)standardImage;
- (void).cxx_destruct;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
