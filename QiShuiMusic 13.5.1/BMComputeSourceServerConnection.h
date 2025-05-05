@interface BMComputeSourceServerConnection : NSObject
@property (nonatomic) BMComputeSourceServer server;
@property (nonatomic) BMProcess clientProcess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)server;
- (void).cxx_destruct;
- (void)sendEventWithStreamIdentifier:timestamp:signpostID:eventData:;
- (id)clientProcess;
- (id)initWithServer:clientProcess:;
@end
