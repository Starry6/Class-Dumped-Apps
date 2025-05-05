@interface PHVideoRequest : PHMediaRequest
@property (nonatomic) <PHMediaRequestDelegate> delegate;
@property (nonatomic) PHImageDisplaySpec displaySpec;
@property (nonatomic) PHVideoRequestBehaviorSpec behaviorSpec;
- (id)behaviorSpec;
- (void)cancel;
- (void)dealloc;
- (void)startRequest;
- (long long)downloadPriority;
- (long long)downloadIntent;
- (BOOL)isNetworkAccessAllowed;
- (id)delegate;
- (void)_finish;
- (void).cxx_destruct;
- (id)displaySpec;
- (BOOL)isSynchronous;
- (id)initWithRequestID:requestIndex:contextType:managerID:asset:displaySpec:behaviorSpec:delegate:;
- (void)_handleResultVideoURL:mediaItemMakerData:info:error:;
@end
