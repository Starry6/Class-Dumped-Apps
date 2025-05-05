@interface DACPLogDFile : NSObject
@property (nonatomic) NSString folder;
@property (nonatomic) NSString baseName;
@property (nonatomic) NSString UUID;
- (id)folder;
- (void).cxx_destruct;
- (id)UUID;
- (id)initWithFolder:baseName:;
- (id)_filePathsMatchingPattern:;
- (id)_getLatestMatchingFilePath;
- (void)_openFileOutDidCreateNewFile:outNewFilePath:;
- (void)_beginWatchingFile;
- (void)_closeFileWithFileEventDispatchSource:;
- (id)_startNewFile;
- (BOOL)logData:outDidCreateNewFile:outNewFilePath:;
- (id)startNewFile;
- (void)checkForMaximumFileSize:wantsCompressed:outDidCreateNewFile:outNewFilePath:;
- (void)cullFilesMaxFileCount:;
- (id)baseName;
@end
