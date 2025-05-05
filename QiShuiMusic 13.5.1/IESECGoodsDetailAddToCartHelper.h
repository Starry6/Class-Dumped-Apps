@interface IESECGoodsDetailAddToCartHelper : NSObject
+ (void)addToShoppingCartActionWithSKUInfo:commonMeta:addToCartMeta:openWithSaaS:btmModel:completion:;
+ (void)handleAddToCartActionWithCommonMeta:addToCartMeta:openWithSaaS:btmModel:completion:;
+ (void)monitorAddCartDurationWithStartTime:isDirectAddcart:extraParams:;
+ (void)monitorAddCartRateEndWithSuccess:model:extraParams:;
@end
