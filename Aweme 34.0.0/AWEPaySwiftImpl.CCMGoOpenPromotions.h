@interface AWEPaySwiftImpl.CCMGoOpenPromotions : MTLModel
@property (nonatomic) NSString promotionType;
@property (nonatomic) NSString notOpenedCenterImg;
@property (nonatomic) NSString notOpenedPromotionText;
@property (nonatomic) BOOL canDisplay;
@property (nonatomic) NSString theme;
@property (nonatomic) NSString promoAssetID;
- (id)notOpenedCenterImg;
- (void)setNotOpenedCenterImg:;
- (id)notOpenedPromotionText;
- (void)setNotOpenedPromotionText:;
- (BOOL)canDisplay;
- (void)setCanDisplay:;
- (id)promoAssetID;
- (void)setPromoAssetID:;
- (id)theme;
- (void)setTheme:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)promotionType;
- (void)setPromotionType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
