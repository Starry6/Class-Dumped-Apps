@interface CARConnectionTimeStore : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)_setupConnection;
- (void)sendConnectionEvent:completion:;
- (id)init;
- (void)dealloc;
- (void)_xpcFetchWithServiceBlock:errorHandler:;
- (void)_xpcFetchWithSynchronousServiceBlock:errorHandler:;
- (id)connection;
- (void).cxx_destruct;
- (void)fetchRecentSessions:;
- (void)setConnection:;
- (void)syncSendConnectionEvent:completion:;
- (void)clearHistoricalConnectionsWithCompletion:;
+ (id)_CARConnectionServiceInterface;
@end
