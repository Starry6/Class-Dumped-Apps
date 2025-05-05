@interface BDXRLBuildInProcessor : BDXRLBaseProcessor
- (void)fetchResourceWithURL:loaderConfig:taskConfig:resolve:reject:;
- (id)initWithMonitorDelegate:;
- (id)resourceLoaderName;
- (void)cancelLoad;
@end
