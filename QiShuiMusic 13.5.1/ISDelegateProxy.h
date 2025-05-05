@interface ISDelegateProxy : NSObject
- (BOOL)respondsToSelector:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
- (void)forwardInvocation:;
- (void)setShouldMessageMainThread:;
- (void)sendInvocationToDelegate:;
@end
