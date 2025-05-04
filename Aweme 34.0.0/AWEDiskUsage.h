@interface AWEDiskUsage : NSObject
+ (double)freeDiskSpace;
+ (unsigned long long)folderSizeAtPath:visitor:;
+ (void)feedbackDiskInfoLog;
+ (unsigned long long)itemAllocatedSizeAtPath:exist:visitor:;
+ (unsigned long long)itemSizeAtPath:exist:visitor:;
+ (double)totalDiskSpace;
+ (unsigned long long)folderAllocatedSizeAtPath:visitor:;
+ (unsigned long long)fileAllocatedSizeAtPath:;
+ (unsigned long long)fileSizeAtPath:;
@end
