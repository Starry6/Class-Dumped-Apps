@interface ISInvocationRecorder : NSObject
- (id)init;
- (void)invokeInvocation:;
- (void)dealloc;
- (id)initWithTarget:;
- (id)methodSignatureForSelector:;
- (void)forwardInvocation:;
- (id)adjustedTargetForSelector:;
@end
