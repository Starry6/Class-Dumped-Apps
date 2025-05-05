@interface PLCacheMetricsCollectorClient : NSObject
- (void)incrementImageCacheHitCount;
- (void)incrementVideoComplementCacheHitCount;
- (void)incrementVideoComplementCacheMissCount;
- (id)initWithAssetsdClient:;
- (void)incrementImageCacheMissCount;
@end
