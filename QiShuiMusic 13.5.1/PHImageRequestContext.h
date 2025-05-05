@interface PHImageRequestContext : PHMediaRequestContext
@property (nonatomic) PHImageRequestOptions imageOptions;
- (id)progressHandler;
- (id)_lazyProgress;
- (BOOL)_shouldLoadHDRGainMapBasedOnChoosingPolicy:;
- (id)_produceIntermediateImageRequestForRequest:;
- (id)produceChildRequestsForRequest:reportingIsLocallyAvailable:isDegraded:result:;
- (id)_produceFinalImageRequestForRequest:;
- (id)_videoBehavior;
- (id)initialRequests;
- (BOOL)shouldReportProgress;
- (id)progresses;
- (BOOL)isNetworkAccessAllowed;
- (long long)type;
- (BOOL)shouldLimitRepairRequestsPerProcess;
- (void).cxx_destruct;
- (BOOL)representsShareableHighQualityResource;
- (void)processMediaResult:forRequest:;
- (BOOL)_isVideoFrameRequest;
- (id)_initialBehavior;
- (id)imageOptions;
- (BOOL)isSynchronous;
- (id)initWithRequestID:managerID:asset:displaySpec:options:resultHandler:;
@end
