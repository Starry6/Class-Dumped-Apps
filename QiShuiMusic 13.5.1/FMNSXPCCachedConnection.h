@interface FMNSXPCCachedConnection : NSObject
@property (nonatomic) FMNSXPCConnection connection;
@property (nonatomic) @? failureBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) @? didInvalidate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDidInvalidate:;
- (id)remoteObjectProxy;
- (id)serialQueue;
- (id)failureBlock;
- (void)setFailureBlock:;
- (void)addFailureBlock:;
- (id)didInvalidate;
- (void)_invalidate;
- (id)initWithFMNSXPCConnection:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setSerialQueue:;
- (void)invalidate;
@end
