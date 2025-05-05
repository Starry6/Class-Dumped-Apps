@interface ASDLogFileOptions : NSObject
@property (nonatomic) NSString logDirectoryPath;
@property (nonatomic) NSString logFileBaseName;
@property (nonatomic) Q maxLogFileSize;
@property (nonatomic) q maxNumberOfLogFiles;
- (id)logDirectoryPath;
- (id)init;
- (void)dealloc;
- (id)logFileBaseName;
- (void)setLogFileBaseName:;
- (void)setMaxNumberOfLogFiles:;
- (long long)maxNumberOfLogFiles;
- (void).cxx_destruct;
- (void)setLogDirectoryPath:;
- (unsigned long long)maxLogFileSize;
- (void)setMaxLogFileSize:;
- (id)copyWithZone:;
@end
