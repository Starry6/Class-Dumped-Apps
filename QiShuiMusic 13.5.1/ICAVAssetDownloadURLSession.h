@interface ICAVAssetDownloadURLSession : ICURLSession
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_createURLSessionWithConfiguration:;
- (void)enqueueAVDownloadRequest:withOptions:completionHandler:;
- (void)enqueueAVDownloadRequest:toDestination:withAVURLAsset:options:completionHandler:;
- (void)mediaServicesWereReset:;
- (void)enqueueAggregateAssetDownloadRequest:toDestination:withOptions:resourceLoaderDelegate:completionHandler:;
- (id)initWithConfiguration:maxConcurrentRequests:qualityOfService:;
- (void)enqueueAVDownloadRequest:toDestination:withOptions:completionHandler:;
- (void)enqueueAggregateAssetDownloadRequest:toDestination:withOptions:completionHandler:;
- (void)URLSession:aggregateAssetDownloadTask:didLoadTimeRange:totalTimeRangesLoaded:timeRangeExpectedToLoad:forMediaSelection:;
- (void)mediaServicesWereLost:;
- (void)enqueueAggregateAssetDownloadRequest:toDestination:withAVURLAsset:options:completionHandler:;
- (id)_createURLSessionTaskForRequest:usingSession:;
@end
