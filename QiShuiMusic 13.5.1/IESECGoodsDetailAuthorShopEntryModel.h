@interface IESECGoodsDetailAuthorShopEntryModel : MTLModel
@property (nonatomic) q toutiaoGoodsCount;
@property (nonatomic) NSNumber authorID;
@property (nonatomic) q recommendGoodsCount;
@property (nonatomic) NSString shopName;
@property (nonatomic) IESECGoodsDetailSellRatingInfoModel sellRatingInfo;
@property (nonatomic) IESECURLModel shopLogo;
@property (nonatomic) NSArray shopHeaderIconList;
@property (nonatomic) NSArray promotionInfos;
@property (nonatomic) IESECGoodsCertificationModel shopBanner;
@property (nonatomic) NSString URL;
@property (nonatomic) BOOL followStatus;
@property (nonatomic) IESECGoodsDetailBrandInfoModel brandInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)brandInfo;
- (BOOL)followStatus;
- (BOOL)hasValidPromotionInfoModel;
- (id)promotionInfos;
- (long long)recommendGoodsCount;
- (id)sellRatingInfo;
- (void)setBrandInfo:;
- (void)setFollowStatus:;
- (void)setPromotionInfos:;
- (void)setRecommendGoodsCount:;
- (void)setSellRatingInfo:;
- (void)setShopBanner:;
- (void)setShopHeaderIconList:;
- (void)setShopLogo:;
- (void)setShopName:;
- (void)setToutiaoGoodsCount:;
- (id)shopBanner;
- (id)shopHeaderIconList;
- (id)shopLogo;
- (id)shopName;
- (BOOL)shouldShowShopEntry;
- (long long)toutiaoGoodsCount;
- (id)trackWhichAccount;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (id)authorID;
- (void)setAuthorID:;
+ (id)promotionInfosJSONTransformer;
+ (id)shopHeaderIconListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
