@interface ByteRTCLogConfig : NSObject
@property (nonatomic) NSString logPath;
@property (nonatomic) Q logLevel;
@property (nonatomic) NSInteger logFileSize;
@property (nonatomic) NSString logFilenamePrefix;
- (int)logFileSize;
- (void)setLogFileSize:;
- (id)logFilenamePrefix;
- (void)setLogFilenamePrefix:;
- (id)logPath;
- (void)setLogPath:;
- (void)setLogLevel:;
- (unsigned long long)logLevel;
- (void).cxx_destruct;
@end
