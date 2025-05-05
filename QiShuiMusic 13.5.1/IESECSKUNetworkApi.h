@interface IESECSKUNetworkApi : NSObject
+ (void)aptRecord:params:model:;
+ (void)fetchGoodsSKUSoldOutState:skuID:completion:;
+ (void)fetchSKUInfoWithParameters:fromLive:openWithSaaS:completion:;
+ (void)fetchSKUInstallmentWithParameters:openWithSaaS:completion:;
+ (void)monitorAddCartRateEndWithParams:skuModel:;
+ (void)requestAutoGetCouponsWithParams:completion:;
+ (void)requestWithPath:params:usePost:fromSaaS:completion:;
+ (void)skuCheckFromLiveWithParameters:openWithSaaS:completion:;
+ (void)skuInfoToCart:fromLive:openWithSaaS:completion:;
+ (void)subscribeStockWithParams:openWithSaaS:completion:;
+ (void)uploadCartGuideFreqWithParameters:openWithSaaS:completion:;
@end
