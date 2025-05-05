@interface NRMockXPCProxy : NSProxy
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
