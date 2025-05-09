@interface AWESearchMerchandiseModel : AWEBaseApiModel
@property (nonatomic) BOOL showCommentPopup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString merchandiseID;
@property (nonatomic) NSString merchandiseName;
@property (nonatomic) NSString platformName;
@property (nonatomic) q merchandisePrice;
@property (nonatomic) NSString merchandiseImageURL;
@property (nonatomic) NSString merchandiseURL;
@property (nonatomic) NSNumber merchandiseImageRatio;
@property (nonatomic) q cellType;
@property (nonatomic) q schemaType;
@property (nonatomic) q infoSourceType;
@property (nonatomic) AWESearchMerchandiseBiddingInformation biddingInformation;
@property (nonatomic) NSArray tagInfos;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) NSArray couponList;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseAttachInfo attachInfo;
@property (nonatomic) NSString openPromotionID;
@property (nonatomic) NSArray highlightPositions;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct textPrice;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct strongPrice;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct strongPricePrefix;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct strongPriceSuffix;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct weakPrice;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct weakPriceSuffix;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct salesInfo;
@property (nonatomic) AWESearchMerchandiseProductRightStruct recommendPrice;
@property (nonatomic) NSArray rights;
@property (nonatomic) AWESearchMerchandisSearchWordRegion searchWordRegion;
@property (nonatomic) AWESearchMerchandiseAdLabelStruct adLabel;
@property (nonatomic) AWESearchMerchandiseProductRecommendInfo recommendInfo;
@property (nonatomic) AWESearchMerchandiseProductRecommendInfo singleRecommendInfo;
@property (nonatomic) AWESearchMerchandiseShopInfo singleShopInfo;
@property (nonatomic) AWESearchMerchandiseProductEcomTagInfo ecomTagInfo;
@property (nonatomic) AWESearchMerchandiseMainPictureRegion mainPictureRegion;
@property (nonatomic) AWESearchMerchandiseMainImageTag mainImageTag;
@property (nonatomic) AWEDoubleColumnSearchMarketInfoModel marketInfo;
@property (nonatomic) q doubleTitleLines;
@property (nonatomic) q singleTitleLines;
@property (nonatomic) q priceStyle;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseVideoInfo merchandiseVideoInfo;
@property (nonatomic) AWESearchMerchandiseAddCartModel shoppingCart;
@property (nonatomic) NSNumber shopID;
@property (nonatomic) NSNumber firstCategoryID;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseExtraInfoMapModel extraInfoMap;
@property (nonatomic) AWESearchMerchandiseInformationBackgroundColorModel informationBGColorModel;
@property (nonatomic) q priceAreaType;
@property (nonatomic) q singlePriceAreaType;
@property (nonatomic) AWESearchMerchandisePriceUpperAreaInfo priceUpperAreaInfo;
@property (nonatomic) AWESearchMerchandisePriceAreaInfo priceAreaInfo;
@property (nonatomic) AWESearchMerchandisePriceDiscountInfo priceDiscountInfo;
@property (nonatomic) AWESearchMerchandisePriceBackgoundModel priceBackground;
@property (nonatomic) AWESearchMerchandisePriceStrengthenInfoModel priceStrengthenInfo;
@property (nonatomic) NSString productStateText;
@property (nonatomic) NSDictionary couponLogMap;
@property (nonatomic) NSString couponServiceInfo;
@property (nonatomic) NSString couponServiceTag;
@property (nonatomic) AWESearchMerchandiseCardBorderInfo cardBorder;
@property (nonatomic) NSString skuID;
@property (nonatomic) NSDictionary bcmParams;
- (void)setSchemaType:;
- (id)promotionID;
- (id)reliableImages;
- (id)sales;
- (long long)promotionSource;
- (id)adLabel;
- (void)setAdLabel:;
- (void)setShopID:;
- (id)shopID;
- (id)recommendInfo;
- (void)setRecommendInfo:;
- (id)shoppingCart;
- (void)setShoppingCart:;
- (id)skuID;
- (void)setSkuID:;
- (id)extraInfoMap;
- (void)setExtraInfoMap:;
- (long long)singlePriceAreaType;
- (id)merchandiseID;
- (void)setMerchandiseID:;
- (id)merchandiseName;
- (void)setMerchandiseName:;
- (long long)merchandisePrice;
- (void)setMerchandisePrice:;
- (id)merchandiseImageURL;
- (void)setMerchandiseImageURL:;
- (id)merchandiseURL;
- (void)setMerchandiseURL:;
- (id)merchandiseImageRatio;
- (void)setMerchandiseImageRatio:;
- (long long)infoSourceType;
- (void)setInfoSourceType:;
- (id)biddingInformation;
- (void)setBiddingInformation:;
- (id)tagInfos;
- (void)setTagInfos:;
- (id)couponList;
- (void)setCouponList:;
- (id)attachInfo;
- (void)setAttachInfo:;
- (id)openPromotionID;
- (void)setOpenPromotionID:;
- (id)highlightPositions;
- (void)setHighlightPositions:;
- (id)textPrice;
- (void)setTextPrice:;
- (id)strongPrice;
- (void)setStrongPrice:;
- (id)strongPricePrefix;
- (void)setStrongPricePrefix:;
- (id)strongPriceSuffix;
- (void)setStrongPriceSuffix:;
- (id)weakPrice;
- (void)setWeakPrice:;
- (id)weakPriceSuffix;
- (void)setWeakPriceSuffix:;
- (id)salesInfo;
- (void)setSalesInfo:;
- (id)recommendPrice;
- (void)setRecommendPrice:;
- (id)searchWordRegion;
- (void)setSearchWordRegion:;
- (id)singleRecommendInfo;
- (void)setSingleRecommendInfo:;
- (id)singleShopInfo;
- (void)setSingleShopInfo:;
- (id)ecomTagInfo;
- (void)setEcomTagInfo:;
- (id)mainPictureRegion;
- (void)setMainPictureRegion:;
- (id)mainImageTag;
- (void)setMainImageTag:;
- (id)marketInfo;
- (void)setMarketInfo:;
- (long long)doubleTitleLines;
- (void)setDoubleTitleLines:;
- (long long)singleTitleLines;
- (void)setSingleTitleLines:;
- (long long)priceStyle;
- (void)setPriceStyle:;
- (id)merchandiseVideoInfo;
- (void)setMerchandiseVideoInfo:;
- (id)firstCategoryID;
- (void)setFirstCategoryID:;
- (id)informationBGColorModel;
- (void)setInformationBGColorModel:;
- (long long)priceAreaType;
- (void)setPriceAreaType:;
- (void)setSinglePriceAreaType:;
- (id)priceUpperAreaInfo;
- (void)setPriceUpperAreaInfo:;
- (id)priceAreaInfo;
- (void)setPriceAreaInfo:;
- (id)priceDiscountInfo;
- (void)setPriceDiscountInfo:;
- (id)priceBackground;
- (void)setPriceBackground:;
- (id)priceStrengthenInfo;
- (void)setPriceStrengthenInfo:;
- (id)productStateText;
- (void)setProductStateText:;
- (id)couponLogMap;
- (void)setCouponLogMap:;
- (id)couponServiceInfo;
- (void)setCouponServiceInfo:;
- (id)couponServiceTag;
- (void)setCouponServiceTag:;
- (id)cardBorder;
- (void)setCardBorder:;
- (id)bcmParams;
- (void)setBcmParams:;
- (BOOL)isToutiaoGoods;
- (BOOL)isTaobaoGoods;
- (id)price;
- (long long)schemaType;
- (id)tags;
- (long long)cellType;
- (id)productID;
- (void)setCellType:;
- (id)platformName;
- (void).cxx_destruct;
- (id)title;
- (id)rights;
- (void)setRights:;
- (id)longTitle;
- (void)setPlatformName:;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)recommendInfoJSONTransformer;
+ (id)extraInfoMapJsonTransformer;
+ (id)tagInfosJSONTransformer;
+ (id)biddingInformationJSONTransformer;
+ (id)couponListJSONTransformer;
+ (id)attachInfoJSONTransformer;
+ (id)highlightPositionsJSONTransformer;
+ (id)textPriceJSONTransformer;
+ (id)strongPriceJSONTransformer;
+ (id)strongPricePrefixJSONTransformer;
+ (id)strongPriceSuffixJSONTransformer;
+ (id)weakPriceJSONTransformer;
+ (id)weakPriceSuffixJSONTransformer;
+ (id)salesJSONTransformer;
+ (id)rightsJSONTransformer;
+ (id)adLabelJSONTransformer;
+ (id)singleRecommendInfoJSONTransformer;
+ (id)singleShopInfoJSONTransformer;
+ (id)marketInfoJSONTransformer;
+ (id)merchandiseMainVideoJSONTransformer;
+ (id)merchandiseAddCartJSONTransformer;
+ (id)informationBGColorModelJSONTransformer;
+ (id)priceUpperAreaInfoJSONTransformer;
+ (id)priceAreaInfoJSONTransformer;
+ (id)priceDiscountInfoJSONTransformer;
+ (id)priceBackgroundJSONTransformer;
+ (id)priceStrengthenInfoJSONTransformer;
+ (id)cardBorderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
