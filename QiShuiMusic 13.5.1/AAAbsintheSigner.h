@interface AAAbsintheSigner : NSObject
@property (nonatomic) AAURLSession session;
@property (nonatomic) AAAbsintheContext context;
@property (nonatomic) double cacheTimeout;
- (void)setSession:;
- (id)init;
- (void)dealloc;
- (id)context;
- (id)session;
- (void).cxx_destruct;
- (void)setContext:;
- (double)cacheTimeout;
- (id)initWithCacheTimeout:;
- (void)signatureForData:completion:;
- (id)_contextLock_contextInvalidatingIfNecessary;
- (void)_contextLock_enqueueContextCleanup;
- (void)_contextLock_dequeueContextCleanup;
- (void)_contextWithCompletion:;
- (void)_contextQueue_contextWithCompletion:;
- (void)_fetchCertificateDataWithCompletion:;
- (void)_fetchSessionInfoWithRequestInfo:completion:;
+ (id)sharedSigner;
+ (id)_contextCreationBlock;
+ (void)_setContextCreationBlock:;
@end
