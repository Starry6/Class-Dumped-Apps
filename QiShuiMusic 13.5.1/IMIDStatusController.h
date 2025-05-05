@interface IMIDStatusController : NSObject
@property (nonatomic) NSMutableSet _servicesRegistered;
@property (nonatomic) NSRecursiveLock _servicesLock;
- (id)init;
- (void).cxx_destruct;
- (id)_servicesLock;
- (void)_processIDStatusResponseForURI:resultStatus:forService:;
- (long long)__statusForID:onService:isCanonicalized:;
- (long long)_idStatusForID:onService:;
- (long long)_statusForCanonicalizedID:onService:;
- (long long)_idStatusForID:onAccount:;
- (void)_requestStatusForID:onService:onAccount:;
- (void)requestStatusForID:onService:;
- (void)requestStatusForID:onAccount:;
- (long long)statusForID:onService:;
- (void)set_servicesLock:;
- (id)_servicesRegistered;
- (void)set_servicesRegistered:;
+ (id)sharedInstance;
@end
