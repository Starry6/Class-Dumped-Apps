@interface MPStoreAssetInfoPlaybackCache : NSObject
- (void).cxx_destruct;
- (id)_init;
- (id)cachedResponseForRequest:;
- (void)withSyncLock:;
- (void)addCachedResponse:forRequest:;
- (void)updateForPlaybackOfFileAsset:fromResponse:;
+ (id)sharedCache;
@end
