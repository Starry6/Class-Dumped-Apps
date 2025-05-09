@interface IESECProductRecommendModel : MTLModel
@property (nonatomic) NSString productID;
@property (nonatomic) NSString promotionID;
@property (nonatomic) IESECURLModel coverImage;
@property (nonatomic) IESECURLModel recommendCover;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber sales;
@property (nonatomic) BOOL hasSecKill;
@property (nonatomic) IESECGoodsMarketingFloorModel platformTextActivity;
@property (nonatomic) NSArray coupons;
@property (nonatomic) NSNumber promotionSource;
@property (nonatomic) NSString KOLID;
@property (nonatomic) NSString secKOLID;
@property (nonatomic) NSString recommendInfo;
@property (nonatomic) NSNumber goodsSymbol;
@property (nonatomic) IESECURLModel productIcon;
@property (nonatomic) NSString productIconName;
@property (nonatomic) BOOL following;
@property (nonatomic) IESECGoodsRecommendReasonModel recommendReason;
@property (nonatomic) IESECGoodsPrice price;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)KOLID;
- (id)coupons;
- (void)setProductIcon:;
- (id)productIconName;
- (id)promotionSource;
- (id)recommendReason;
- (void)setGoodsSymbol:;
- (void)setPromotionID:;
- (id)goodsSymbol;
- (BOOL)hasSecKill;
- (id)logExtra;
- (id)platformTextActivity;
- (id)productIcon;
- (id)promotionID;
- (id)recommendCover;
- (id)recommendInfo;
- (id)sales;
- (id)secKOLID;
- (void)setCoupons:;
- (void)setCoverImage:;
- (void)setHasSecKill:;
- (void)setKOLID:;
- (void)setLogExtra:;
- (void)setPlatformTextActivity:;
- (void)setProductIconName:;
- (void)setPromotionSource:;
- (void)setRecommendCover:;
- (void)setRecommendInfo:;
- (void)setRecommendReason:;
- (void)setSales:;
- (void)setSecKOLID:;
- (id)productID;
- (void)setProductID:;
- (BOOL)following;
- (void)setTitle:;
- (void)setFollowing:;
- (id)title;
- (void).cxx_destruct;
- (id)price;
- (void)setPrice:;
- (id)coverImage;
+ (id)couponsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
