@interface PHAdjustmentDataRequestContext : PHMediaRequestContext
@property (nonatomic) PHImageRequestOptions options;
- (id)initialRequests;
- (BOOL)isNetworkAccessAllowed;
- (id)options;
- (long long)type;
- (void).cxx_destruct;
- (void)processMediaResult:forRequest:;
- (id)initWithRequestID:managerID:asset:options:resultHandler:;
@end
