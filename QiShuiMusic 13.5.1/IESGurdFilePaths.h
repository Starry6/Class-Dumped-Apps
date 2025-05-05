@interface IESGurdFilePaths : NSObject
+ (id)activeMetaDataPath;
+ (id)activeMetadataPath;
+ (id)blocklistChannelCrc32Path;
+ (id)blocklistChannelPath;
+ (id)briefFilePathWithFullPath:;
+ (id)cacheRootDirectoryPath;
+ (id)channelDatasPathNew;
+ (id)directoryPathForAccessKey:;
+ (id)directoryPathForAccessKey:channel:;
+ (id)directoryPathForAccessKey:channel:path:;
+ (id)downloadedFilePath:;
+ (unsigned long long)fileSizeAtDirectory:;
+ (id)fileSizeStringAtPath:;
+ (id)inactiveDirectoryPath;
+ (id)inactivePathForAccessKey:channel:;
+ (id)settingsResponseCrc32Path;
+ (id)settingsResponsePath;
+ (unsigned long long)fileSizeAtPath:;
@end
