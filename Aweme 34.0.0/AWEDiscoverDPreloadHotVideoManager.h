@interface AWEDiscoverDPreloadHotVideoManager : NSObject
+ (void)removeAllCachesForType:;
+ (void)cacheVideos:forKeyword:type:;
+ (id)feedTipSharedCache;
+ (id)generalSearchSharedCache;
+ (id)cacheForType:;
+ (BOOL)containsVideoForKeyword:type:;
+ (id)videoArrayForKeyword:type:;
@end
