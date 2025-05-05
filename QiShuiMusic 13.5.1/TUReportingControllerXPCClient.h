@interface TUReportingControllerXPCClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)synchronousServerWithErrorHandler:;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (id)serverWithErrorHandler:;
- (void).cxx_destruct;
- (id)queue;
- (id)registeredStream:withAvailability:reply:;
- (id)didCleanUpForStream:reply:;
- (id)didStartRequestForStream:withTransactionID:reply:;
- (id)didReceiveResultsForStream:withTransactionID:reply:;
+ (void)setSynchronousServer:;
+ (void)setAsynchronousServer:;
+ (id)asynchronousServer;
+ (id)synchronousServer;
+ (id)reportingControllerServerXPCInterface;
@end
