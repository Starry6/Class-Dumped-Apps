@interface PHImageRequest : PHMediaRequest
@property (nonatomic) {CGSize=dd} desiredImageSize;
@property (nonatomic) <PHImageRequestDelegate> delegate;
@property (nonatomic) PHImageDisplaySpec displaySpec;
@property (nonatomic) PHImageRequestBehaviorSpec behaviorSpec;
- (id)behaviorSpec;
- (void)cancel;
- (void)dealloc;
- (void)startRequest;
- (void)_decodeImageConfiguredWithURL:isPrimaryFormat:;
- (long long)downloadPriority;
- (void)configureWithURL:uniformTypeIdentifier:exifOrientation:;
- (long long)downloadIntent;
- (void)setBehaviorSpec:;
- (BOOL)isNetworkAccessAllowed;
- (void)setDisplaySpec:;
- (id)delegate;
- (void).cxx_destruct;
- (void)handleAvailabilityChangeForResource:url:info:error:;
- (id)desiredImageSize;
- (id)description;
- (id)initWithRequestID:requestIndex:contextType:managerID:asset:displaySpec:behaviorSpec:chooser:delegate:;
- (id)displaySpec;
- (BOOL)isSynchronous;
@end
