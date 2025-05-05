@interface NSUndoManagerProxy : NSProxy
- (id)initWithManager:;
- (id)methodSignatureForSelector:;
- (id)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)isKindOfClass:;
- (void)forwardInvocation:;
- (void)setTargetClass:;
- (void)superRelease;
@end
