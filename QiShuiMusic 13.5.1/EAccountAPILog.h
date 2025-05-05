@interface EAccountAPILog : NSObject
+ (void)deleteErrorFile;
+ (void)addOneLogToErrorFileByArray:;
+ (id)contentsOfDirectory:;
+ (BOOL)errorFileExist;
+ (id)errorFilePath;
+ (BOOL)fileExist:;
+ (id)getDocumentsPath;
+ (float)getFreeDiskspace;
+ (BOOL)hasFreeSpece;
+ (id)readContentsFromErrorFileByString;
+ (void)startOneSDKLog;
+ (void)tryStartSDKLog;
+ (void)writeTofile:path:content:;
@end
