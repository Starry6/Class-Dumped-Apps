@interface TTVideoEnginePlayUrlSource : TTVideoEnginePlayBaseSource
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary mediaInfo;
- (id)allUrlsForResolution:;
- (id)currentUrl;
- (BOOL)isMainUrl;
- (BOOL)isSingleUrl;
- (BOOL)preloadDataIsExpire;
- (long long)retryStrategyForRetryCount:;
- (id)urlForResolution:;
- (id)url;
- (void)setUrl:;
- (id)deepCopy;
- (void).cxx_destruct;
- (id)videoId;
- (BOOL)isEqual:;
- (id)mediaInfo;
- (void)setMediaInfo:;
+ (id)mediaInfo:key:urls:;
@end
