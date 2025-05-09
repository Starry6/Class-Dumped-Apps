@interface IESECRecommendCommonProductPriceModel : MTLModel
@property (nonatomic) NSNumber type;
@property (nonatomic) NSNumber minPrice;
@property (nonatomic) NSNumber maxPrice;
@property (nonatomic) NSNumber marketPrice;
@property (nonatomic) NSString typeText;
@property (nonatomic) NSNumber hotSalePrice;
@property (nonatomic) NSString hotSaleSKUID;
@property (nonatomic) NSArray suffixArray;
@property (nonatomic) NSNumber originalPrice;
@property (nonatomic) NSNumber referencePrice;
@property (nonatomic) NSNumber showPrice;
@property (nonatomic) NSString showPriceType;
@property (nonatomic) NSString showSkuID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)priceInfoString;
- (void)setMarketPrice:;
- (void)setSuffixArray:;
- (id)hotSalePrice;
- (id)hotSaleSKUID;
- (id)marketPrice;
- (id)maxPrice;
- (id)minPrice;
- (id)originalPrice;
- (id)referencePrice;
- (void)setHotSalePrice:;
- (void)setHotSaleSKUID:;
- (void)setMaxPrice:;
- (void)setMinPrice:;
- (void)setOriginalPrice:;
- (void)setReferencePrice:;
- (void)setShowPrice:;
- (void)setShowPriceType:;
- (void)setShowSkuID:;
- (void)setTypeText:;
- (id)showPrice;
- (id)showPriceType;
- (id)showSkuID;
- (id)suffixArray;
- (id)typeText;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
+ (id)suffixArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
