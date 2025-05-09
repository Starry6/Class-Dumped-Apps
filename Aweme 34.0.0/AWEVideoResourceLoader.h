@interface AWEVideoResourceLoader : NSObject
@property (nonatomic) NSURL requestURL;
@property (nonatomic) NSString requestURLKey;
@property (nonatomic) NSMutableArray requestList;
@property (nonatomic) AWEVideoCachePlayTask playTask;
@property (nonatomic) NSObject<OS_dispatch_queue> taskQueue;
@property (nonatomic) BOOL stopped;
@property (nonatomic) <AWEVideoPlayerInternalDelegate> internalDelegate;
@property (nonatomic) q errorTryCount;
@property (nonatomic) <AWEVideoResourceLoaderDelegate> delegate;
@property (nonatomic) NSError error;
@property (nonatomic) Q errorStrategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)requestURLKey;
- (void)requestTask:didReceiveResponse:;
- (void)requestTask:didReceiveData:;
- (void)requestTask:didFailWithError:;
- (void)requestTaskDidFinishLoading:;
- (void)setRequestURLKey:;
- (unsigned long long)errorStrategy;
- (void)setErrorStrategy:;
- (id)initWithURL:queue:internalDelegate:;
- (void)setRequestList:;
- (void)setPlayTask:;
- (id)playTask;
- (void)setErrorTryCount:;
- (id)dataRequestDescription:;
- (long long)errorTryCount;
- (void)addLoadingRequest:;
- (void)removeLoadingRequest:;
- (void)processRequestList;
- (id)requestList;
- (BOOL)requestedDataCached:;
- (void)finishLoadingWithLoadingRequest:;
- (void)getCacheLengthWithCompletion:;
- (id)internalDelegate;
- (id)delegate;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:;
- (void)setError:;
- (id)requestURL;
- (void)setInternalDelegate:;
- (void)stopLoading;
- (void)setStopped:;
- (id)taskQueue;
- (void)setRequestURL:;
- (void).cxx_destruct;
- (id)error;
- (void)setDelegate:;
- (void)setTaskQueue:;
- (BOOL)stopped;
- (void)resourceLoader:didCancelLoadingRequest:;
+ (id)resourceLoaderWithURL:queue:internalDelegate:;
@end
