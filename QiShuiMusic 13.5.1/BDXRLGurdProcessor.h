@interface BDXRLGurdProcessor : BDXRLBaseProcessor
@property (nonatomic) BDXGurdSyncTask task;
- (void)doTaskWith:loaderConfig:warpResolveHandler:warpRejectHandler:;
- (void)fetchResourceWithURL:loaderConfig:taskConfig:resolve:reject:;
- (id)getProviderWith:loaderConfig:;
- (id)initWithMonitorDelegate:;
- (id)resourceLoaderName;
- (void)saveCacheIfNeeded:;
- (void)dealloc;
- (id)task;
- (void)setTask:;
- (void)cancelLoad;
- (void).cxx_destruct;
+ (void)deleteGurdCacheForResource:;
@end
