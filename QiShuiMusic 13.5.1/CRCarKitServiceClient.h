@interface CRCarKitServiceClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)_setupConnection;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)performSynchronousServiceBlock:errorHandler:;
- (void)_serviceQueuePerformBlock:errorHandler:;
- (void)performServiceBlock:errorHandler:;
+ (id)serviceQueue;
@end
