@interface IESECGoodsDetailContentDataModel : MTLModel
@property (nonatomic) IESECGoodsDetailBaseInfoSkuDataModel skuInfo;
@property (nonatomic) IESECPriceElement priceElement;
@property (nonatomic) IESECPriceElement marketPriceElement;
@property (nonatomic) IESECPriceElement discountPriceElement;
@property (nonatomic) IESECSKUPrice skuPrice;
@property (nonatomic) IESECDiscountPrice skuDiscountPrice;
@property (nonatomic) IESECTextElement saleElement;
@property (nonatomic) NSArray benefitsAndTagsContentElements;
@property (nonatomic) IESECLongTitleElement goodsTitleElement;
@property (nonatomic) NSArray bottomTitleTagsContentElements;
@property (nonatomic) IESECMultiTextWithIconElement userLike;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSaleElement:;
- (id)skuInfo;
- (id)benefitsAndTagsContentElements;
- (id)bottomTitleTagsContentElements;
- (id)discountPriceElement;
- (id)goodsTitleElement;
- (id)marketPriceElement;
- (id)priceElement;
- (id)saleElement;
- (void)setBenefitsAndTagsContentElements:;
- (void)setBottomTitleTagsContentElements:;
- (void)setDiscountPriceElement:;
- (void)setGoodsTitleElement:;
- (void)setMarketPriceElement:;
- (void)setPriceElement:;
- (void)setSkuDiscountPrice:;
- (void)setSkuInfo:;
- (void)setSkuPrice:;
- (void)setUserLike:;
- (id)skuDiscountPrice;
- (id)skuPrice;
- (id)userLike;
- (void).cxx_destruct;
+ (id)benefitsAndTagsContentElementsJSONTransformer;
+ (id)bottomTitleTagsContentElementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
