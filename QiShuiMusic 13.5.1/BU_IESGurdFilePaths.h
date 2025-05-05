@interface BU_IESGurdFilePaths : NSObject
+ (id)activeMetaDataPath;
+ (id)backupDirectoryPath;
+ (id)backupPathForMd5:;
+ (id)briefFilePathWithFullPath:;
+ (id)cacheRootDirectoryPath;
+ (id)directoryPathForAccessKey:;
+ (id)directoryPathForAccessKey:channel:;
+ (id)directoryPathForAccessKey:channel:path:;
+ (id)fileSizeStringAtPath:;
+ (id)inactiveDirectoryPath;
+ (id)inactiveMetaDataPath;
+ (id)inactivePathForAccessKey:channel:;
+ (id)inactiveZipPathForAccessKey:channel:version:md5:;
+ (void)setCacheRootDirectoryPath:;
+ (unsigned long long)fileSizeAtPath:;
@end
