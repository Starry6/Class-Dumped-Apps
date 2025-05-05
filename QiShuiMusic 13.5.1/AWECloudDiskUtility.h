@interface AWECloudDiskUtility : NSObject
+ (id)diskSpace;
+ (long long)folderSizeAtPath:;
+ (id)formatMemory:;
+ (id)formattedMemory:;
+ (id)freeDiskSpace:;
+ (long long)longDiskSpace;
+ (long long)longFreeDiskSpace;
+ (id)usedDiskSpace:;
+ (long long)fileSizeAtPath:;
@end
