@interface EDPersistenceDatabaseConnectionPool : NSObject
@property (nonatomic) <EDPersistenceDatabaseConnectionPoolDelegate> delegate;
@property (nonatomic) Q cacheSize;
@property (nonatomic) Q maxConcurrentBackgroundReaders;
@property (nonatomic) Q backgroundReadersWaiting;
@property (nonatomic) Q writersWaiting;
- (void)setCacheSize:;
- (unsigned long long)cacheSize;
- (id)init;
- (void)dealloc;
- (unsigned long long)maxConcurrentReaders;
- (void)setDelegate:;
- (id)initWithDelegate:maxConcurrentBackgroundReaders:;
- (void)flush;
- (id)_connectionWithType:;
- (id)delegate;
- (id)backgroundReaderConnection;
- (unsigned long long)writersWaiting;
- (void).cxx_destruct;
- (BOOL)_lockForConnectionType:resource:;
- (id)readerConnection;
- (unsigned long long)maxConcurrentBackgroundReaders;
- (void)checkInConnection:;
- (id)writerConnection;
- (unsigned long long)backgroundReadersWaiting;
- (void)_unlockForConnectionType:resource:;
@end
