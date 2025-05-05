@interface HybridRLBuildInProcessor : HybridRLBaseProcessor
- (void)fetchResourceWithURL:container:loaderConfig:taskConfig:resolve:reject:;
- (id)resourceLoaderName;
- (id)init;
- (void)cancelLoad;
@end
