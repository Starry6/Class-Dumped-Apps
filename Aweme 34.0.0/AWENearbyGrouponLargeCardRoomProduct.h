@interface AWENearbyGrouponLargeCardRoomProduct : AWEBaseApiModel
@property (nonatomic) NSString productName;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) NSString price;
@property (nonatomic) NSString originPrice;
@property (nonatomic) BOOL isShowing;
- (id)cover;
- (void)setCover:;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (id)originPrice;
- (void)setOriginPrice:;
- (id)price;
- (void)setProductName:;
- (id)productName;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (void)setPrice:;
- (void)setIsShowing:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)coverJSONTransformer;
@end
