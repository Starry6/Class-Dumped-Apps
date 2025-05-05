@interface SSRollableLog : NSObject
@property (nonatomic) SSLogFileOptions logOptions;
- (id)logOptions;
- (void)dealloc;
- (id)initWithLogOptions:;
- (void)writeString:;
- (id)_activeLogFilePath;
- (void)_checkLogFileSize;
- (void)_closeLogFile;
- (id)_logFilePathWithIndex:;
- (void)_openLogFile;
- (void)_rollLogFiles;
@end
