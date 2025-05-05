@interface IESECServiceProxy : NSProxy
- (void)rebindService:;
- (id)initWithService:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (Class)class;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
@end
