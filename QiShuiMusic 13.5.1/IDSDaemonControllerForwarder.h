@interface IDSDaemonControllerForwarder : NSProxy
@property (nonatomic) NSInteger priority;
@property (nonatomic) @? completion;
@property (nonatomic) NSProtocolChecker protocol;
@property (nonatomic) NSObject<OS_dispatch_queue> ivarQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> remoteMessageQueue;
- (id)completion;
- (id)protocol;
- (void)setPriority:;
- (id)ivarQueue;
- (id)methodSignatureForSelector:;
- (id)initWithProtocol:ivarQueue:remoteMessageQueue:completion:;
- (void).cxx_destruct;
- (id)remoteMessageQueue;
- (void)forwardInvocation:;
- (id)initWithProtocol:ivarQueue:remoteMessageQueue:;
- (int)priority;
@end
