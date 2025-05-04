@interface AWEDependencyProxy : NSProxy
@property (nonatomic) Protocol _protocol;
@property (nonatomic) <AWEGenericServiceLocator> _context;
@property (nonatomic) NSDictionary _signatureCache;
@property (nonatomic) NSDictionary _caches;
- (void)set_protocol:;
- (void)set_context:;
- (void)set_signatureCache:;
- (void)set_caches:;
- (id)_signatureCache;
- (id)initWithProtocol:context:;
- (BOOL)respondsToSelector:;
- (BOOL)conformsToProtocol:;
- (id)_context;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)debugDescription;
- (id)methodSignatureForSelector:;
- (id)_protocol;
- (id)_caches;
@end
