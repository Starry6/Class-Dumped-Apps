@interface IMInvocationTrampoline : NSObject
@property (nonatomic) @ target;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)forwardInvocation:;
- (void)performInvocation:;
@end
