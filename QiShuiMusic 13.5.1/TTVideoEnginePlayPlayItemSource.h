@interface TTVideoEnginePlayPlayItemSource : TTVideoEnginePlayVidSource
@property (nonatomic) TTVideoEnginePlayItem playItem;
- (id)allUrlsForResolution:;
- (unsigned long long)autoResolution;
- (id)currentUrl;
- (BOOL)isMainUrl;
- (id)playItem;
- (BOOL)preloadDataIsExpire;
- (long long)retryStrategyForRetryCount:;
- (void)setPlayItem:;
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
