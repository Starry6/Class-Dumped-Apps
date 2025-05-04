@interface AWEFileKitUtil : NSObject
+ (BOOL)useAllocatedDiskSize;
+ (void)createDirWithPath:excludedFromBackup:handler:;
+ (unsigned long long)sizeAtPath:;
+ (unsigned long long)checkDiskUsageLevel;
@end
