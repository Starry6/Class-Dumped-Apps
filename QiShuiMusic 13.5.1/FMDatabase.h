@interface FMDatabase : NSObject
@property (nonatomic) I applicationID;
@property (nonatomic) I userVersion;
@property (nonatomic) BOOL traceExecution;
@property (nonatomic) BOOL checkedOut;
@property (nonatomic) BOOL crashOnErrors;
@property (nonatomic) BOOL logsErrors;
@property (nonatomic) NSMutableDictionary cachedStatements;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL goodConnection;
@property (nonatomic) q lastInsertRowId;
@property (nonatomic) NSInteger changes;
@property (nonatomic) BOOL isInTransaction;
@property (nonatomic) BOOL hasOpenResultSets;
@property (nonatomic) BOOL shouldCacheStatements;
@property (nonatomic) NSString databasePath;
@property (nonatomic) NSURL databaseURL;
@property (nonatomic) ^v sqliteHandle;
@property (nonatomic) double maxBusyRetryTimeInterval;
- (BOOL)commit;
- (unsigned int)userVersion;
- (id)databasePath;
- (unsigned int)applicationID;
- (BOOL)rollback;
- (id)databaseURL;
- (id)init;
- (BOOL)beginTransaction;
- (id)executeQuery:;
- (void)dealloc;
- (id)initWithURL:;
- (BOOL)open;
- (BOOL)isOpen;
- (void)setVersion:;
- (int)version;
- (void)setIsOpen:;
- (BOOL)interrupt;
- (BOOL)executeUpdate:;
- (id)getSchema;
- (id)dateFromString:;
- (void)clearCachedStatements;
- (BOOL)close;
- (void)setDateFormat:;
- (BOOL)beginExclusiveTransaction;
- (id)lastErrorMessage;
- (id)cachedStatementForQuery:;
- (int)changes;
- (BOOL)setKey:;
- (id)stringFromDate:;
- (BOOL)tableExists:;
- (int)lastErrorCode;
- (void)setUserVersion:;
- (void)setCachedStatement:forQuery:;
- (void).cxx_destruct;
- (BOOL)isInTransaction;
- (id)initWithPath:;
- (long long)lastInsertRowId;
- (id)sqliteHandle;
- (BOOL)shouldCacheStatements;
- (void)setApplicationID:;
- (id)lastError;
- (BOOL)beginDeferredTransaction;
- (id)stringForQuery:;
- (id)prepare:;
- (id)sqlitePath;
- (int)limitFor:value:;
- (BOOL)openWithFlags:;
- (BOOL)openWithFlags:vfs:;
- (void)setMaxBusyRetryTimeInterval:;
- (double)maxBusyRetryTimeInterval;
- (int)busyRetryTimeout;
- (void)setBusyRetryTimeout:;
- (BOOL)hasOpenResultSets;
- (void)closeOpenResultSets;
- (void)resultSetDidClose:;
- (BOOL)rekey:;
- (BOOL)rekeyWithData:;
- (BOOL)setKeyWithData:;
- (BOOL)hasDateFormatter;
- (BOOL)goodConnection;
- (void)warnInUse;
- (BOOL)databaseExists;
- (BOOL)hadError;
- (int)lastExtendedErrorCode;
- (id)errorWithMessage:;
- (int)bindObject:toColumn:inStatement:;
- (void)extractSQL:argumentsList:intoString:arguments:;
- (id)executeQuery:withParameterDictionary:;
- (id)executeQuery:withArgumentsInArray:orDictionary:orVAList:shouldBind:;
- (BOOL)bindStatement:WithArgumentsInArray:orDictionary:orVAList:;
- (id)executeQueryWithFormat:;
- (id)executeQuery:withArgumentsInArray:;
- (id)executeQuery:values:error:;
- (id)executeQuery:withVAList:;
- (BOOL)executeUpdate:error:withArgumentsInArray:orDictionary:orVAList:;
- (BOOL)executeUpdate:withArgumentsInArray:;
- (BOOL)executeUpdate:values:error:;
- (BOOL)executeUpdate:withParameterDictionary:;
- (BOOL)executeUpdate:withVAList:;
- (BOOL)executeUpdateWithFormat:;
- (BOOL)executeStatements:;
- (BOOL)executeStatements:withResultBlock:;
- (BOOL)executeUpdate:withErrorAndBindings:;
- (BOOL)update:withErrorAndBindings:;
- (BOOL)beginImmediateTransaction;
- (BOOL)inTransaction;
- (BOOL)startSavePointWithName:error:;
- (BOOL)releaseSavePointWithName:error:;
- (BOOL)rollbackToSavePointWithName:error:;
- (id)inSavePoint:;
- (BOOL)checkpoint:error:;
- (BOOL)checkpoint:name:error:;
- (BOOL)checkpoint:name:logFrameCount:checkpointCount:error:;
- (void)setShouldCacheStatements:;
- (void)makeFunctionNamed:maximumArguments:withBlock:;
- (void)makeFunctionNamed:arguments:block:;
- (int)valueType:;
- (int)valueInt:;
- (long long)valueLong:;
- (double)valueDouble:;
- (id)valueData:;
- (id)valueString:;
- (void)resultNullInContext:;
- (void)resultInt:context:;
- (void)resultLong:context:;
- (void)resultDouble:context:;
- (void)resultData:context:;
- (void)resultString:context:;
- (void)resultError:context:;
- (void)resultErrorCode:context:;
- (void)resultErrorNoMemoryInContext:;
- (void)resultErrorTooBigInContext:;
- (BOOL)traceExecution;
- (void)setTraceExecution:;
- (BOOL)checkedOut;
- (void)setCheckedOut:;
- (BOOL)crashOnErrors;
- (void)setCrashOnErrors:;
- (BOOL)logsErrors;
- (void)setLogsErrors:;
- (id)cachedStatements;
- (void)setCachedStatements:;
- (int)intForQuery:;
- (long long)longForQuery:;
- (BOOL)boolForQuery:;
- (double)doubleForQuery:;
- (id)dataForQuery:;
- (id)dateForQuery:;
- (id)getTableSchema:;
- (BOOL)columnExists:inTableWithName:;
- (BOOL)columnExists:columnName:;
- (BOOL)validateSQL:error:;
+ (id)databaseWithPath:;
+ (id)databaseWithURL:;
+ (id)FMDBUserVersion;
+ (int)FMDBVersion;
+ (id)sqliteLibVersion;
+ (BOOL)isSQLiteThreadSafe;
+ (id)storeableDateFormat:;
@end
