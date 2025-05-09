@interface ML3DatabaseConnectionPool : NSObject
@property (nonatomic) BOOL closed;
@property (nonatomic) NSString databasePath;
@property (nonatomic) <ML3DatabaseConnectionPoolDelegate> delegate;
@property (nonatomic) Q maxReaders;
@property (nonatomic) Q maxWriters;
@property (nonatomic) Q connectionsJournalingMode;
@property (nonatomic) BOOL useDistantWriterConnections;
@property (nonatomic) BOOL locked;
@property (nonatomic) BOOL isCurrentThreadConnectionInTransaction;
- (BOOL)isLocked;
- (id)databasePath;
- (void)setClosed:;
- (id)_generateDiagnostic;
- (id)init;
- (unsigned long long)maxReaders;
- (BOOL)isClosed;
- (id)initWithDatabasePath:maxReaders:;
- (void)dealloc;
- (void)setUseDistantWriterConnections:;
- (BOOL)useDistantWriterConnections;
- (id)_localConnectionForThread:;
- (void)setDelegate:;
- (unsigned long long)connectionsJournalingMode;
- (void)lockAndCloseAllConnectionsForTermination;
- (void)closeAllConnections;
- (id)_connectionForWriting:useThreadConnection:storeThreadLocalConnection:;
- (unsigned long long)maxWriters;
- (id)debugDescription;
- (void)unlock;
- (BOOL)isCurrentThreadConnectionInTransaction;
- (void)lock;
- (void)_closeAllConnectionsAndWaitForBusyConnections:;
- (void)_setConnection:forIdentifier:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setConnectionsJournalingMode:;
- (id)readerConnection;
- (id)initWithDatabasePath:maxReaders:maxWriters:;
- (void)checkInConnection:;
- (id)writerConnection;
- (id)_connectionForIdentifier:;
- (void)_setLocalConnection:forThread:;
@end
