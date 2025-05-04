@interface AWEPOIOfflineScanDataManager : NSObject
+ (void)fetchProfileCouponInfoForActivity:toUser:extraInfo:materialId:completion:;
+ (void)followMerchantAndGetCoupon:toUser:extraInfo:materialId:completion:;
+ (void)appointLiveAndGetCoupon:extraInfo:materialId:completion:;
@end
