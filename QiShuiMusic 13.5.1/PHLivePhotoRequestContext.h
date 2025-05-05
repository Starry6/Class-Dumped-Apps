@interface PHLivePhotoRequestContext : PHMediaRequestContext
@property (nonatomic) PHLivePhotoRequestOptions livePhotoOptions;
- (id)progressHandler;
- (id)produceChildRequestsForRequest:reportingIsLocallyAvailable:isDegraded:result:;
- (id)initialRequests;
- (BOOL)shouldReportProgress;
- (id)progresses;
- (BOOL)isNetworkAccessAllowed;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)representsShareableHighQualityResource;
- (void)processMediaResult:forRequest:;
- (id)initWithRequestID:managerID:asset:displaySpec:options:resultHandler:;
- (BOOL)_shouldRequestVideo;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (id)livePhotoOptions;
@end
