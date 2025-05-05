@interface PLCoreDataRecorder : NSObject
+ (void)_reset;
+ (BOOL)isRecording;
+ (BOOL)stopRecording;
+ (id)_recordedStatementsAndReset:;
+ (id)recordedStatements;
+ (id)recordedStatementsAndReset;
+ (BOOL)_shouldRecordPhotoLibraryDb:;
+ (long long)_libraryIDForDb:;
+ (id)_dbHandleFromConnection:;
+ (BOOL)_installConnectionSwizzle;
+ (BOOL)_installRecorder;
+ (void)_recordExecutedStatement:db:normalizedSQL:expandedSQL:plan:duration:pageHitCountBeforeExecution:pageMissCountBeforeExecution:;
+ (id)recordedStatementsDescription;
+ (BOOL)startRecordingForLibraries:limitToMarkedThreads:includeBindVariables:includeIOMetrics:entryDecorator:entriesAvailableHandler:;
@end
