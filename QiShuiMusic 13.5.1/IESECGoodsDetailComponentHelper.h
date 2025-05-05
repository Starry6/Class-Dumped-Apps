@interface IESECGoodsDetailComponentHelper : NSObject
+ (BOOL)hasPlatformActivity:;
+ (BOOL)hasPlatformDiscount:;
+ (id)initPriceInfoComponentViewWithParameters:style:;
+ (BOOL)shouldInSeckillActivity:;
+ (BOOL)shouldShowActivityNotice:;
+ (BOOL)shouldShowCommentService:;
+ (BOOL)shouldShowCoupon:;
+ (BOOL)shouldShowCouponComponent:;
+ (BOOL)shouldShowDeliveryService:;
+ (BOOL)shouldShowDiscountPrice:;
+ (BOOL)shouldShowFullReturnBanner:;
+ (BOOL)shouldShowGlobalInfo:;
+ (BOOL)shouldShowInstallmentBenefits:;
+ (BOOL)shouldShowInstallmentOpenURLLink:;
+ (BOOL)shouldShowPlatformDiscount:;
+ (BOOL)shouldShowRankList:;
+ (BOOL)shouldShowSelectionInfo:;
+ (BOOL)shouldShowService:;
+ (BOOL)shouldShowShopDiscountComponent:;
+ (BOOL)shouldShowStoreCommentService:;
+ (BOOL)shouldShowTaxesInfo:;
@end
