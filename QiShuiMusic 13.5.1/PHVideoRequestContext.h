@interface PHVideoRequestContext : PHMediaRequestContext
@property (nonatomic) PHVideoRequestOptions videoOptions;
@property (nonatomic) q intent;
- (long long)intent;
- (id)progressHandler;
- (id)_lazyProgress;
- (id)initialRequests;
- (id)progresses;
- (BOOL)isNetworkAccessAllowed;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)representsShareableHighQualityResource;
- (void)processMediaResult:forRequest:;
- (id)initWithRequestID:managerID:asset:displaySpec:options:intent:resultHandler:;
- (id)videoOptions;
@end
