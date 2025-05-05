@interface IESIMAwemeFeedPreCacheModel : MTLModel
@property (nonatomic) BOOL isDownLoading;
@property (nonatomic) BOOL isFinishDownloading;
@property (nonatomic) BOOL isLastTryFailed;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) NSString cachedURL;
@property (nonatomic) NSString urlKey;
@property (nonatomic) double cacheTimeStamp;
- (BOOL)isLastTryFailed;
- (double)cacheTimeStamp;
- (id)cachedURL;
- (BOOL)isDownLoading;
- (BOOL)isFinishDownloading;
- (void)setCacheTimeStamp:;
- (void)setCachedURL:;
- (void)setIsDownLoading:;
- (void)setIsFinishDownloading:;
- (void)setIsLastTryFailed:;
- (void)setIsFromCache:;
- (BOOL)isFromCache;
- (void).cxx_destruct;
- (id)urlKey;
- (void)setUrlKey:;
@end
