@interface IESIMShareSchemaGoodsModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) NSString goodsName;
@property (nonatomic) NSNumber minPrice;
@property (nonatomic) NSNumber sales;
@property (nonatomic) NSNumber maxPrice;
- (id)goodsName;
- (id)maxPrice;
- (id)minPrice;
- (id)sales;
- (void)setGoodsName:;
- (void)setMaxPrice:;
- (void)setMinPrice:;
- (void)setSales:;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
