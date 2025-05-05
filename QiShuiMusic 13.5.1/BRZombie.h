@interface BRZombie : NSProxy
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (void)forwardInvocation:;
+ (void)turnObjectIntoZombie:;
@end
