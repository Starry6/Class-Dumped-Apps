@interface AWEPaidStreamIAANetworkManager : NSObject
+ (void)getURLWithURLPath:block:;
+ (void)getAwardConfigV2WithRequestParameter:completion:;
+ (void)getRewardConfigInfosWithRequestParameter:completion:;
+ (id)commonParametersWithRequestParameter:;
+ (void)unlockRewardWithRequestParameter:completion:;
+ (void)reportOpenRewardWithRequestParameter:retryCount:completion:;
+ (void)unlockRewardWithRequestParameter:retryCount:completion:;
@end
