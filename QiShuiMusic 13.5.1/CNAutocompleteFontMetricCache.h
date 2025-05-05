@interface CNAutocompleteFontMetricCache : NSObject
- (id)init;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (void)_didReceivePreferredFontChangedNotification:;
- (id)cachedPreferredFontForStyle:;
- (double)cachedScaledFloatWithValue:forKey:;
- (double)cachedScaledFloatWithValue:fontStyle:;
- (id)cachedFont:forKey:;
- (double)cachedFloat:forKey:;
- (BOOL)ensureCacheIsValid;
- (id)metricCacheDictionary;
+ (id)sharedFontMetricCache;
@end
