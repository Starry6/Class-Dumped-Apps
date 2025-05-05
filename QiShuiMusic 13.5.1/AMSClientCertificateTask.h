@interface AMSClientCertificateTask : AMSTask
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) AMSKeychainOptions options;
- (void)setOptions:;
- (id)initWithOptions:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)options;
- (void).cxx_destruct;
- (id)performClientCertChainRequest;
- (id)_baaOptionsWithOptions:error:;
@end
