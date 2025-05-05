@interface MFFontMetricCache : NSObject
- (id)init;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (id)cachedImage:forKey:;
- (void)_didReceivePreferredFontChangedNotification:;
- (id)cachedPreferredFontForStyle:;
- (id)cachedPreferredFontForStyle:maximumContentSizeCategory:;
- (double)cachedScaledFloatWithValue:forKey:;
- (double)cachedScaledFloatWithValue:fontStyle:;
- (double)cachedScaledFloatWithValue:fontStyle:maximumContentSizeCategory:;
- (id)cachedFont:forKey:;
- (double)cachedFloat:forKey:;
- (BOOL)ensureCacheIsValid;
- (id)metricCacheDictionary;
+ (id)sharedFontMetricCache;
@end
