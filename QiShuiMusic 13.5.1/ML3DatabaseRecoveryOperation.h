@interface ML3DatabaseRecoveryOperation : NSOperation
@property (nonatomic) NSString path;
@property (nonatomic) NSError error;
- (id)path;
- (id)error;
- (void)main;
- (void).cxx_destruct;
- (id)initWithDatabaseFilePath:;
- (id)_createSQLiteErrorWithCode:description:;
- (id)_lastCorruptionRestoreAttemptDate;
- (void)_updateLastCorruptionRestoreAttemptDate;
- (void)_recreateDatabaseWithCompletion:;
@end
