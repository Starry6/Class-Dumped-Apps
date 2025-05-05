@interface FMNSXPCConnection : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) FMFuture future;
@property (nonatomic) BOOL _testMockConnection;
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)future;
- (void)destroyXPCConnection;
- (id)remoteObjectProxy;
- (void)set_testMockConnection:;
- (void)addFailureBlock:;
- (id)initWithConfiguration:exportedObject:;
- (BOOL)_testMockConnection;
- (long long)state;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)invalidate;
- (id)initWithConfiguration:;
- (void)setFuture:;
@end
