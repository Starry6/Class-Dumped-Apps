@interface MSVSQLDatabaseTransaction : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)commit;
- (BOOL)rollback;
- (void)dealloc;
- (BOOL)rollbackToSavepoint:;
- (id)resultsForStatement:;
- (BOOL)_releaseSavepoint:;
- (id)createSavepoint;
- (id)statementWithString:error:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)executeStatement:error:;
- (id)name;
@end
