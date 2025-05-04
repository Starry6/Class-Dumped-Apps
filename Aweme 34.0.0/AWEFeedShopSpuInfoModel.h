@interface AWEFeedShopSpuInfoModel : MTLModel
@property (nonatomic) NSString price;
@property (nonatomic) NSString originPrice;
@property (nonatomic) NSString spuName;
@property (nonatomic) AWEURLModel headImage;
@property (nonatomic) NSString spuId;
@property (nonatomic) NSString discount;
@property (nonatomic) NSString content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)spuId;
- (void)setSpuId:;
- (id)originPrice;
- (void)setOriginPrice:;
- (id)headImage;
- (void)setHeadImage:;
- (id)spuName;
- (void)setSpuName:;
- (id)discount;
- (void)setDiscount:;
- (id)price;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setPrice:;
+ (BOOL)automaticallyDefaultMapping;
@end
