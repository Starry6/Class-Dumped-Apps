@interface PHSingleMediaRequestContext : PHMediaRequestContext
@property (nonatomic) PHMediaRequest request;
- (id)progressHandler;
- (id)_lazyProgress;
- (id)request;
- (id)initialRequests;
- (id)progresses;
- (BOOL)isNetworkAccessAllowed;
- (long long)type;
- (void).cxx_destruct;
- (void)processMediaResult:forRequest:;
- (void)setRequest:;
- (BOOL)isSynchronous;
- (id)initWithRequestID:managerID:asset:displaySpec:type:networkAccessAllowed:progressHandler:resultHandler:;
+ (id)avProxyRequestContextWithRequestID:managerID:asset:options:resultHandler:;
+ (id)originalAdjustmentDataRequestContextWithRequestID:managerID:asset:options:resultHandler:;
+ (long long)_indexOfAvProxyFromResources:hasAdjustments:version:;
@end
