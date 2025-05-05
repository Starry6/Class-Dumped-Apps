@interface LogDumpUtility : NSObject
+ (id)getCachesDirectoryPath;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (void)removeFilesInDirectory:olderThan:;
+ (id)getDefaultLogDumpPath;
+ (id)createFileListSortedByTimestamp:;
+ (id)logFilename:dumpID:logNameType:prefix:suffix:;
+ (BOOL)createDirectory:;
+ (BOOL)shouldCleanupFiles;
@end
