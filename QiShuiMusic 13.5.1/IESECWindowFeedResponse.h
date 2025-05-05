@interface IESECWindowFeedResponse : IESECBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) NSArray products;
@property (nonatomic) NSString cartURL;
@property (nonatomic) NSString cartProductNum;
- (id)cartURL;
- (id)cartProductNum;
- (void)setCartProductNum:;
- (void)setCartURL:;
- (long long)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (id)products;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setProducts:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
