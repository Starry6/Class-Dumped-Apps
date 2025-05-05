@interface CNFileUtilities : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithFileServices:;
- (BOOL)isFileAtUrlOnARemoteFileSystem:;
- (id)sharedLockDirectoryUrl;
- (id)sharedLockUrlWithName:;
- (id)proxyLockUrlForFileAtUrl:;
+ (id)sharedInstance;
+ (id)os_log;
+ (id)fileLock;
+ (id)initializeFileLock;
+ (id)sharedLockDirectoryURLWithFileServices:;
+ (id)requestSharedLockDirectoryURLWithFileServices:;
@end
