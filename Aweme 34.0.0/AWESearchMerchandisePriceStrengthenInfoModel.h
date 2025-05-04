@interface AWESearchMerchandisePriceStrengthenInfoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel priceTrendBg;
@property (nonatomic) AWEURLModel priceGrabIcon;
@property (nonatomic) AWEURLModel priceTag;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct priceUnderLine;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct priceSuffix;
- (id)priceSuffix;
- (id)priceTag;
- (void)setPriceTag:;
- (void)setPriceSuffix:;
- (id)priceTrendBg;
- (void)setPriceTrendBg:;
- (id)priceGrabIcon;
- (void)setPriceGrabIcon:;
- (id)priceUnderLine;
- (void)setPriceUnderLine:;
- (void).cxx_destruct;
+ (id)priceTrendBgJsonTransformer;
+ (id)priceGrabIconJsonTransformer;
+ (id)priceTagJsonTransformer;
+ (id)priceUnderLineJsonTransformer;
+ (id)priceSuffixJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
