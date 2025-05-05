@interface PuzzleDelegateBroadcaster : NSProxy
- (id)initWithTargetProtocol:;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (void)addSubscriber:;
- (void)removeSubscriber:;
@end
