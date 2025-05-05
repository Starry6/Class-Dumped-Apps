@interface IESIMAFDFriendsFeedHistoryCacheModel : MTLModel
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) double cacheTimeStamp;
@property (nonatomic) NSString cachedURL;
@property (nonatomic) NSString urlKey;
- (double)cacheTimeStamp;
- (id)cachedURL;
- (void)setCacheTimeStamp:;
- (void)setCachedURL:;
- (void)setIsFromCache:;
- (BOOL)isFromCache;
- (void).cxx_destruct;
- (id)urlKey;
- (void)setUrlKey:;
@end
