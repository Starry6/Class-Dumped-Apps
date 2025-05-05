@interface IESECGoodsDetailBuyNowHelper : NSObject
+ (id)orderURLFromGoodsDetailBuyMeta:;
+ (id)extraOrderParamsWithCommonMeta:buyMeta:onViewController:;
+ (id)generateOrderURLV2:;
+ (void)goToNativeOrderPageWithCouponId:commonMeta:buyMeta:withSKUInfo:onViewController:onSKUViewController:entranceInfoParamsForSKU:showRequest:completion:;
+ (void)goToOrderPageWithCouponId:commonMeta:buyMeta:withSKUInfo:onViewController:onSKUViewController:entranceInfoParamsForSKU:showRequest:completion:;
+ (void)handleBuyActionWithCommonMeta:buyMeta:openWithSaaS:showRequest:onViewController:;
+ (void)monitorApplyCouponRateWithSuccess:model:error:;
+ (void)monitorBuyNowRateWithSuccess:applyCoupon:categoryParams:start:;
+ (void)monitorRateEndFailWithCode:model:message:;
+ (void)openAuctionPanelWithCommonMeta:buyMeta:newSourceType:;
+ (void)openInsurancePageWithCommonMeta:buyMeta:;
+ (void)openVirtualGoodsPageWithCommonMeta:buyMeta:;
+ (id)p_extraOrderParamsFromDirectlyBuy:commonMeta:buyMeta:withSKUInfo:entranceInfoParamsForSKU:onViewController:;
@end
