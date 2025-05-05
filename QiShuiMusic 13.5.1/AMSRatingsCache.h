@interface AMSRatingsCache : NSObject
@property (nonatomic) Q mediaType;
@property (nonatomic) NSString storeFront;
- (unsigned long long)mediaType;
- (id)cacheDirectory;
- (id)cachePath;
- (void).cxx_destruct;
- (id)storeFront;
- (id)initWithMediaType:;
- (id)initWithMediaType:storeFront:;
- (BOOL)_hasCachedData;
- (void)clearCacheIfNeeded;
- (id)cacheTitle;
- (id)getCacheData;
- (BOOL)addCacheData:;
@end
