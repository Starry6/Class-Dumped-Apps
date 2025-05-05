@interface MSVSQLDatabase : NSObject
@property (nonatomic) NSURL databaseURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)databaseURL;
- (id)transactionWithName:;
- (void)dealloc;
- (id)resultsForStatement:;
- (id)executeSQL:;
- (id)statementWithString:error:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)executeStatement:error:;
- (id)initWithURL:error:;
- (id)initWithMemory;
@end
