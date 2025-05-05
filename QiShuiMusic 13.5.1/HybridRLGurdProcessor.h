@interface HybridRLGurdProcessor : HybridRLBaseProcessor
- (void)doTaskWith:loaderConfig:container:warpResolveHandler:warpRejectHandler:;
- (void)fetchResourceWithURL:container:loaderConfig:taskConfig:resolve:reject:;
- (id)getProviderWith:loaderConfig:;
- (id)resourceLoaderName;
- (void)saveCacheIfNeeded:;
- (id)init;
- (void)dealloc;
- (void)cancelLoad;
+ (void)deleteGurdCacheForResource:;
@end
