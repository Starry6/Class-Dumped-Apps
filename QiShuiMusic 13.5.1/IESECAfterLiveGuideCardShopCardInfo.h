@interface IESECAfterLiveGuideCardShopCardInfo : MTLModel
@property (nonatomic) NSString shopURLScheme;
@property (nonatomic) NSString shopID;
@property (nonatomic) NSArray products;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShopID:;
- (void)setShopURLScheme:;
- (id)shopID;
- (id)shopURLScheme;
- (id)products;
- (void).cxx_destruct;
- (void)setProducts:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
