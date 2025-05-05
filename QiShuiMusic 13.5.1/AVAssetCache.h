@interface AVAssetCache : NSObject
@property (nonatomic) BOOL playableOffline;
- (long long)maxSize;
- (id)initWithURL:;
- (id)allKeys;
- (long long)currentSize;
- (BOOL)isPlayableOffline;
- (id)_init;
- (id)mediaSelectionOptionsInMediaSelectionGroup:;
- (id)URL;
- (long long)maxEntrySize;
- (void)removeEntryForKey:;
- (long long)sizeOfEntryForKey:;
- (id)lastModifiedDateOfEntryForKey:;
+ (id)assetCacheWithURL:;
+ (id)assetCacheForHTTPLiveStreamingWithURL:;
+ (id)assetCacheForProgressiveDownloadWithURL:;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:;
@end
