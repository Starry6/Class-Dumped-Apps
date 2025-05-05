@interface TTVideoEnginePlayInfoSource : TTVideoEnginePlayVidSource
@property (nonatomic) TTVideoEngineVideoInfo videoInfo;
- (void)fetchUrlWithApiString:auth:params:apiVersion:result:;
- (BOOL)preloadDataIsExpire;
- (long long)retryStrategyForRetryCount:;
- (void)setVideoInfo:;
- (id)videoInfo;
- (id)deepCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
