@interface IDSXPCConnectionRemoteObjectPromise : NSObject
@property (nonatomic) NSXPCInterface interface;
@property (nonatomic) NSMutableArray pendingInvocations;
@property (nonatomic) @ target;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)interface;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (void)setInterface:;
- (id)initWithInterface:queue:;
- (void)setPendingInvocations:;
- (id)methodSignatureForSelector:;
- (id)remoteObjectProxy;
- (void)setTarget:;
- (void)failWithError:;
- (void).cxx_destruct;
- (id)target;
- (void)fulfillWithRemoteObject:;
- (void)setQueue:;
- (id)pendingInvocations;
- (void)forwardInvocation:;
- (void)_assertVoidReturnValueInInvocation:;
- (id)queue;
@end
