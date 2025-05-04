@interface AWELiveAnnouncementProductInfo : AWEBaseApiModel
@property (nonatomic) NSString promotionId;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString priceText;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString pricePrefix;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)promotionId;
- (void)setPromotionId:;
- (id)pricePrefix;
- (void)setPricePrefix:;
- (id)scheme;
- (void)setScheme:;
- (id)productId;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setProductId:;
- (id)priceText;
- (void)setPriceText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
