@interface TTDownloadCommonTools : NSObject
@property (nonatomic) NSString systemCacheDir;
@property (nonatomic) NSString systemTempDir;
@property (nonatomic) NSString systemLibraryDir;
@property (nonatomic) NSString systemDocumentsDir;
@property (nonatomic) NSString systemHomeDir;
@property (nonatomic) NSString systemSysDataDir;
- (void)setSystemCacheDir:;
- (void)setSystemDocumentsDir:;
- (void)setSystemHomeDir:;
- (void)setSystemLibraryDir:;
- (void)setSystemSysDataDir:;
- (void)setSystemTempDir:;
- (id)systemCacheDir;
- (id)systemDocumentsDir;
- (id)systemHomeDir;
- (id)systemLibraryDir;
- (id)systemSysDataDir;
- (id)systemTempDir;
- (id)init;
- (void).cxx_destruct;
+ (id)calculateUrlMd5:;
+ (long long)checkDownloadPathValid:;
+ (BOOL)copyFile:toPath:isOverwrite:error:;
+ (BOOL)createDir:error:;
+ (long long)getFileSize:;
+ (id)getRealTime:;
+ (id)getUserRealFullPath:;
+ (unsigned int)intervalSinceNow:;
+ (BOOL)isDirectoryExist:;
+ (BOOL)isFileExist:;
+ (BOOL)deleteFile:;
+ (id)shareInstance;
@end
