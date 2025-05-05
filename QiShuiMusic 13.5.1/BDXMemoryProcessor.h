@interface BDXMemoryProcessor : BDXRLBaseProcessor
- (void)fetchResourceWithURL:loaderConfig:taskConfig:resolve:reject:;
- (id)initWithMonitorDelegate:;
- (id)resourceLoaderName;
- (void)updateCacheWithURL:loaderConfig:taskConfig:;
@end
