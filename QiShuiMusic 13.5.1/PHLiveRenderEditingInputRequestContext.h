@interface PHLiveRenderEditingInputRequestContext : PHContentEditingInputRequestContext
- (id)progressHandler;
- (void)cancel;
- (id)produceChildRequestsForRequest:reportingIsLocallyAvailable:isDegraded:result:;
- (id)initialRequests;
- (id)progresses;
- (void).cxx_destruct;
- (void)processMediaResult:forRequest:;
- (id)initWithRequestID:managerID:asset:options:useRAWAsUnadjustedBase:resultHandler:;
- (void)processAndReturnResultsWithRequest:;
- (void)_handleRenderVideoFinishedWithRequest:avAsset:videoComposition:audioMix:error:mutableInfo:;
+ (id)videoLiveRenderContextWithRequestID:managerID:asset:options:targetSize:contentMode:renderedVideoHandler:;
+ (id)videoLiveRenderContextWithRequestID:managerID:asset:options:targetSize:renderedVideoHandler:;
@end
