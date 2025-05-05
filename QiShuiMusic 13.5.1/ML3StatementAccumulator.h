@interface ML3StatementAccumulator : NSObject
@property (nonatomic) Q statementThreshold;
@property (nonatomic) NSMutableArray statementQueue;
@property (nonatomic) NSString databasePath;
@property (nonatomic) ML3DatabaseConnection connection;
@property (nonatomic) NSUUID existingTransactionIdentifier;
@property (nonatomic) Q priorityLevel;
- (id)databasePath;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)setPriorityLevel:;
- (unsigned long long)priorityLevel;
- (BOOL)enqueueStatement:;
- (BOOL)flushAndWait:;
- (BOOL)_onQueueFlushAndWait:;
- (unsigned long long)statementThreshold;
- (void)setStatementThreshold:;
- (id)statementQueue;
- (id)existingTransactionIdentifier;
- (void)setExistingTransactionIdentifier:;
@end
