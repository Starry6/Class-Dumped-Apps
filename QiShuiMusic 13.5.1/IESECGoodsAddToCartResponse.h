@interface IESECGoodsAddToCartResponse : IESECBaseApiModel
@property (nonatomic) q cartCount;
@property (nonatomic) q cartId;
@property (nonatomic) NSString toast;
@property (nonatomic) NSArray businessLineCount;
- (id)businessLineCount;
- (long long)cartCount;
- (long long)cartId;
- (void)setBusinessLineCount:;
- (void)setCartCount:;
- (void)setCartId:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
+ (id)businessLineCountJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
