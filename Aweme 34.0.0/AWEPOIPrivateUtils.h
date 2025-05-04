@interface AWEPOIPrivateUtils : NSObject
+ (id)formatURLString:;
+ (void)spuDetailWithSpuModel:enterFrom:detailEnterPage:detailEnterMethod:trackParams:extraQuery:;
+ (void)spuDetailWithSpuModel:enterFrom:detailEnterPage:detailEnterMethod:trackParams:;
+ (BOOL)serviceButtonDidTappedWithServiceModel:poiInfo:aweme:traceSessionID:trackerData:;
+ (void)transferToMicroAppURLString:;
+ (void)spuDetailWithCOISpuModel:traceSessionID:;
@end
