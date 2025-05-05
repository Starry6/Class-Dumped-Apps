@interface IMDistributingProxy : NSProxy
@property (nonatomic) NSArray targets;
@property (nonatomic) NSObject<OS_dispatch_queue> targetQueue;
@property (nonatomic) BOOL asynchronous;
@property (nonatomic) @? filterBlock;
- (id)targets;
- (BOOL)respondsToSelector:;
- (id)targetQueue;
- (id)initWithTargets:;
- (id)methodSignatureForSelector:;
- (BOOL)isAsynchronous;
- (id)initWithTargets:targetQueue:asynchronous:filterBlock:;
- (id)filterBlock;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
