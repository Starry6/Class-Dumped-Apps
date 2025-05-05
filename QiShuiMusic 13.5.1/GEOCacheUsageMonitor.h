@interface GEOCacheUsageMonitor : NSObject
- (id)init;
- (void)dealloc;
- (void)_flush;
- (void)flush;
- (void).cxx_destruct;
- (void)_startTimerIfNecessary;
- (void)recordCacheHitForType:;
- (void)recordCacheMissForType:;
- (void)_recordTileCacheEventWithKey:cacheEventDict:tileSizeInBytes:error:;
- (void)recordTileCacheHitForReason:tileSource:tileKey:tileSizeInBytes:;
- (void)recordTileCacheMissForReason:missType:tileKey:tileSizeInBytes:httpStatus:;
- (void)recordTileCacheMissForReason:missType:tileKey:loadError:;
+ (id)sharedMonitor;
@end
