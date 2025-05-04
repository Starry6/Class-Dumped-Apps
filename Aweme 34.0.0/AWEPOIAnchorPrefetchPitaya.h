@interface AWEPOIAnchorPrefetchPitaya : NSObject
+ (void)registerPitayaMessageHandler;
+ (void)setPreLoadInfo:;
+ (id)preLoadInfo;
+ (id)poiLocalLifePreloadInfo;
+ (void)runPOIAnchorPrefetchTask:;
+ (void)setPoiLocalLifePreloadInfo:;
@end
