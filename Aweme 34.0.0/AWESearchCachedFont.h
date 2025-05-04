@interface AWESearchCachedFont : NSObject
@property (nonatomic) NSMutableDictionary fontCache;
@property (nonatomic) BOOL fontCacheEnable;
- (id)aweSearch_systemFontOfSize:weight:;
- (id)aweSearch_fontOfClass:weight:;
- (id)awe_searchRegularPingFangFont:;
- (void)handleMemoryWarning:;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)setFontCache:;
- (void)setFontCacheEnable:;
- (void)preloadAsset;
- (id)fontCache;
- (id)cacheFontOfClass:weight:;
- (id)cacheSystemFontOfSize:weight:;
- (id)cachePingFangFontOfSize:weight:;
- (BOOL)fontCacheEnable;
- (id)cacheKeyWithPrefix:size:weight:;
- (id)init;
- (void).cxx_destruct;
+ (id)aweSearch_systemFontOfSize:weight:;
+ (id)aweSearch_fontOfClass:weight:;
+ (id)awe_searchRegularPingFangFont:;
+ (id)sharedFont;
@end
