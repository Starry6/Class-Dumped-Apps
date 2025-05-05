@interface IESECGoodsCombiningPropertyModel : MTLModel
@property (nonatomic) NSArray skus;
@property (nonatomic) NSDictionary productFormats;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)productFormats;
- (void)setProductFormats:;
- (void)setSkus:;
- (id)skus;
- (void).cxx_destruct;
+ (id)productFormatsJSONTransformer;
+ (id)skusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
