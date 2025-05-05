@interface IESLiveSaaSWebImageLoadRetryCache : NSObject
@property (nonatomic) NSCache retryCache;
- (void)cacheRequestWithURLString:;
- (void)removeRequestFromCache:;
- (id)retryCache;
- (void)setRetryCache:;
- (BOOL)shouldRetryRequestWithURLString:;
- (long long)maxRetryCount;
- (id)init;
- (void).cxx_destruct;
- (long long)cacheCountLimit;
@end
