@interface PLSQLiteRecorder : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)stopRecording;
- (id)_recordedStatementsAndReset:;
- (id)initWithEntryDecorator:entriesAvailableHandler:;
- (BOOL)startRecordingSqliteDb:;
- (id)recordedStatements;
- (id)recordedStatementsAndReset;
+ (id)queryPlanFromSQL:usingDb:;
@end
