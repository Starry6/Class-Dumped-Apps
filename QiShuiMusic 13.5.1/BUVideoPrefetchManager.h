@interface BUVideoPrefetchManager : NSObject
@property (nonatomic) NSMutableDictionary loaderDic;
@property (nonatomic) NSLock loaderLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelPrefetch:;
- (void)csj_prefetchWithNativeAd:;
- (id)loaderDic;
- (id)loaderForURL:;
- (id)loaderLock;
- (BOOL)prefetchUrlInQueue:;
- (void)prefetchWithVideoUrl:cachePath:prefetchSize:prefetchStartBlock:prefetchFinshBlock:prefetchCancelBlock:;
- (long long)queryPrefetchSizeWithVideoUrl:cachePath:;
- (void)setLoaderDic:;
- (void)setLoaderLock:;
- (id)init;
- (void).cxx_destruct;
+ (id)videoCacheComponent:;
+ (id)videoCachePath;
+ (id)sharedInstance;
@end
