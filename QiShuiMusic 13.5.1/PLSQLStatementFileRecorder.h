@interface PLSQLStatementFileRecorder : NSObject
- (void)willTeardownConnection:;
- (void)_reconsiderRecordingState;
- (id)initWithBundleController:;
- (void)didCreateConnection:;
- (void)_installSignalHandler;
- (BOOL)startRecordingToFileURL:withTag:;
- (void).cxx_destruct;
- (BOOL)stopRecordingWithSummary:;
- (BOOL)_decorateStatement:;
+ (unsigned long long)_callStackHash;
+ (id)_chooseFileURLFromFileURL:;
+ (void)_writeStatements:toFile:usingQueue:totalPages:;
+ (void)_writeRecordingPostambleUsingQueue:toFile:;
+ (id)_daemonSearchIndexManagerFromBundleController:;
@end
