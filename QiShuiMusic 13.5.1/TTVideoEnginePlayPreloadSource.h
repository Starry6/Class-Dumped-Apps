@interface TTVideoEnginePlayPreloadSource : TTVideoEnginePlayVidSource
@property (nonatomic) TTAVPreloaderItem preloadItem;
- (void)setPreloadItem:;
- (id)allUrlsForResolution:;
- (unsigned long long)autoResolution;
- (id)currentUrl;
- (BOOL)isLocalFile;
- (BOOL)isMainUrl;
- (BOOL)preloadDataIsExpire;
- (id)preloadItem;
- (long long)retryStrategyForRetryCount:;
- (BOOL)skipToNext;
- (BOOL)supportDash;
- (id)supportResolutions;
- (BOOL)supportSSL;
- (id)urlForResolution:;
- (id)deepCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)currentResolution;
@end
