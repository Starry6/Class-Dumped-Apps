@interface ASCServicesConnection : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSXPCConnection connectionIfValid;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)workQueue;
- (void)connectionWasInvalidated;
- (id)connection;
- (void).cxx_destruct;
- (id)testConnection;
- (id)lockupFetcherService;
- (id)metricsService;
- (id)offerStateServiceWithDelegate:;
- (void)connectionWasInterrupted;
- (id)serviceWithBlock:;
- (id)connectionIfValid;
- (void)setConnectionIfValid:;
+ (id)log;
+ (id)sharedConnection;
@end
