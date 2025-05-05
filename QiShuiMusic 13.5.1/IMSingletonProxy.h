@interface IMSingletonProxy : NSProxy
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (BOOL)__isSingletonProxy__im;
- (id)singletonRef;
- (id)singletonOverrideRef;
- (id)initWithSingleton:singletonOverride:;
- (void)setSingletonOverride:;
@end
