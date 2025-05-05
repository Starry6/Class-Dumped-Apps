@interface TTVideoEnginePlayUrlsSource : TTVideoEnginePlayBaseSource
@property (nonatomic) q urlIndex;
@property (nonatomic) NSArray urls;
- (BOOL)_canSkipToNext;
- (id)allUrlsForResolution:;
- (id)currentUrl;
- (BOOL)isMainUrl;
- (BOOL)isSingleUrl;
- (BOOL)preloadDataIsExpire;
- (long long)retryStrategyForRetryCount:;
- (void)setUrlIndex:;
- (BOOL)skipToNext;
- (id)urlForResolution:;
- (long long)urlIndex;
- (id)init;
- (id)urls;
- (void)setUrls:;
- (id)deepCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
