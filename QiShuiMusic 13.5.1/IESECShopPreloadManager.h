@interface IESECShopPreloadManager : NSObject
@property (nonatomic) YYMemoryCache preloadShopCache;
- (void)destory;
- (id)__cachedKeyWithContext:;
- (id)__cachedKeyWithQueryDict:;
- (void)__doPrefetchWithViewModel:configuration:;
- (BOOL)__shouldRunPitayaTaskWithQueryDict:;
- (id)cachedDataWithContext:;
- (id)preloadShopCache;
- (void)preloadWithQuery:preloadConfiguration:;
- (void)preloadWithViewModel:preloadConfiguration:;
- (void)reinitValidDurIfNeededWithQueryDict:;
- (void)removeCacheDataWithContext:;
- (void)runPitayaTaskIfNeededWithInputData:queryDict:;
- (void)setPreloadShopCache:;
- (id)viewModelWithQueryDict:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
