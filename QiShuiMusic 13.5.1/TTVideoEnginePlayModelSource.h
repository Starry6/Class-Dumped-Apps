@interface TTVideoEnginePlayModelSource : TTVideoEnginePlayVidSource
@property (nonatomic) TTVideoEngineModel videoModel;
- (void)fetchUrlWithApiString:auth:params:apiVersion:result:;
- (BOOL)hasEmbeddedSubtitle;
- (BOOL)preloadDataIsExpire;
- (long long)retryStrategyForRetryCount:;
- (void)setVideoModel:;
- (id)subtitleInfos;
- (id)videoModel;
- (id)deepCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
