@interface AVManagedAssetCache : AVAssetCache
- (long long)maxSize;
- (void)setMaxSize:;
- (void)dealloc;
- (id)initWithURL:;
- (id)allKeys;
- (long long)currentSize;
- (BOOL)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:;
- (id)URL;
- (long long)maxEntrySize;
- (void)removeEntryForKey:;
- (long long)sizeOfEntryForKey:;
- (id)lastModifiedDateOfEntryForKey:;
- (id)initWithURL:enableCRABSCache:enableHLSCache:;
- (void)setMaxEntrySize:;
- (BOOL)isProgressiveDownloadCacheEnabled;
- (BOOL)isHTTPLiveStreamingCacheEnabled;
+ (id)assetCacheWithURL:;
+ (id)assetCacheForHTTPLiveStreamingWithURL:;
+ (id)assetCacheForProgressiveDownloadWithURL:;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:;
@end
