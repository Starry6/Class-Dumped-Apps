@interface AWEAwemeFeedPreCacheModel : MTLModel
@property (nonatomic) BOOL isDownLoading;
@property (nonatomic) BOOL isFinishDownloading;
@property (nonatomic) BOOL isLastTryFailed;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) NSString cachedURL;
@property (nonatomic) NSString urlKey;
@property (nonatomic) double cacheTimeStamp;
@property (nonatomic) AWEVideoBSModel bsModel;
- (id)bsModel;
- (void)setBsModel:;
- (id)cachedURL;
- (BOOL)isDownLoading;
- (void)setIsDownLoading:;
- (BOOL)isFinishDownloading;
- (void)setIsFinishDownloading:;
- (BOOL)isLastTryFailed;
- (void)setIsLastTryFailed:;
- (void)setCachedURL:;
- (double)cacheTimeStamp;
- (void)setCacheTimeStamp:;
- (BOOL)isFromCache;
- (void)setIsFromCache:;
- (void).cxx_destruct;
- (void)setUrlKey:;
- (id)urlKey;
@end
