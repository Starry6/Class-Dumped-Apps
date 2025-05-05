@interface PLSQLiteDatabase : NSObject
- (BOOL)commitTransaction;
- (BOOL)close;
- (BOOL)beginExclusiveTransaction;
- (BOOL)rollbackTransaction;
- (BOOL)prepareStatement:andStepThroughResultsWithBlock:;
- (BOOL)prepareAndEvaluateStatement:;
- (id)initWithOpenedSQLite3Database:;
- (BOOL)beginDeferredTransaction;
- (id)_prepareStatement:;
- (BOOL)_execute:;
+ (id)openDatabaseAtPath:capabilities:;
+ (int)dataProtectionOpenFlagForCapabilities:;
+ (int)dataProtectionOpenFlagForPath:;
+ (id)_openSQLiteDatabaseAtPath:capabilities:;
@end
