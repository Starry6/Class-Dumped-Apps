@interface BDXImageDownloadProcessor : BDXRLBaseProcessor
@property (nonatomic) BDWebImageRequest webImageRequest;
- (id)webImageRequest;
- (void)fetchResourceWithURL:loaderConfig:taskConfig:resolve:reject:;
- (id)initWithMonitorDelegate:;
- (id)resourceLoaderName;
- (void)setWebImageRequest:;
- (void)cancelLoad;
- (void).cxx_destruct;
@end
