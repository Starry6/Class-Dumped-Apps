@interface InvocationTrampoline : NSObject
@property (nonatomic) @ target;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (id)target;
- (void)forwardInvocation:;
- (void)performInvocation:;
@end
