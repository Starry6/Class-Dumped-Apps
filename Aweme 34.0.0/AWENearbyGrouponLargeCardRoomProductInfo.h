@interface AWENearbyGrouponLargeCardRoomProductInfo : AWEBaseApiModel
@property (nonatomic) NSArray products;
@property (nonatomic) NSString title;
- (id)products;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setProducts:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)productsJSONTransformer;
@end
