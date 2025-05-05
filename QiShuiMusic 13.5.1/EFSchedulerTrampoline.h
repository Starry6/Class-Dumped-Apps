@interface EFSchedulerTrampoline : NSObject
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (id)debugDescription;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (id)_initWithScheduler:object:;
+ (id)trampolineWithScheduler:object:;
@end
