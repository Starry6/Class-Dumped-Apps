@interface IESECShopRecommendGoodsBaseInfo : MTLModel
@property (nonatomic) NSString productID;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber sales;
@property (nonatomic) NSArray images;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sales;
- (void)setSales:;
- (id)productID;
- (void)setProductID:;
- (void)setTitle:;
- (id)images;
- (id)title;
- (void).cxx_destruct;
- (void)setImages:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
@end
