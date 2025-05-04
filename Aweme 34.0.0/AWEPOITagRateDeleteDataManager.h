@interface AWEPOITagRateDeleteDataManager : NSObject
+ (id)rateIdWithNotification:;
+ (void)poiAwemeFetchDeleteDataWithParams:eventAttachedParams:completion:;
+ (void)updateAnonymousStatusFetchWithParams:eventAttachedParams:completion:;
+ (void)publishEventWithName:eventAttachedParams:;
+ (void)publishGoodsDetailRefreshEventIfNeedWithParams:eventAttachedParams:;
@end
