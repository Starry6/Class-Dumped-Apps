@interface AWEPerfWeakProxy : NSProxy
@property (nonatomic) @ target;
- (BOOL)isKindOfClass:;
- (id)target;
- (id)forwardingTargetForSelector:;
- (id)initWithTarget:;
- (void)setTarget:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
@end
