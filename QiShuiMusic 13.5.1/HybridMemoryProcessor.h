@interface HybridMemoryProcessor : HybridRLBaseProcessor
- (void)fetchResourceWithURL:container:loaderConfig:taskConfig:resolve:reject:;
- (id)resourceLoaderName;
- (void)updateCacheWithURL:container:loaderConfig:taskConfig:;
- (id)init;
@end
