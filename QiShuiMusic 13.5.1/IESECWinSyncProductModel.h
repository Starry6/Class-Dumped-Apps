@interface IESECWinSyncProductModel : MTLModel
@property (nonatomic) NSArray products;
@property (nonatomic) NSString title;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setType:;
- (void)setTitle:;
- (id)products;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (void)setProducts:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
