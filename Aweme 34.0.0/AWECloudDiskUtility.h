@interface AWECloudDiskUtility : NSObject
+ (id)diskSpace;
+ (id)freeDiskSpace:;
+ (long long)folderSizeAtPath:;
+ (long long)longDiskSpace;
+ (id)formatMemory:;
+ (long long)longFreeDiskSpace;
+ (id)formattedMemory:;
+ (id)usedDiskSpace:;
+ (long long)fileSizeAtPath:;
@end
