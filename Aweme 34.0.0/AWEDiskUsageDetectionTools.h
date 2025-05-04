@interface AWEDiskUsageDetectionTools : NSObject
+ (void)insertDiskCleanGuideVideoIfNeeded;
+ (void)markDiskCleanGuideVideoInsertedForIDIfNeeded:;
+ (BOOL)checkIfDiskCleanVideoForAwemeID:;
+ (void)configTouchMenuForDiskClean:;
+ (BOOL)isAlertShowing;
+ (long long)defaultDiskFreeSpaceValue;
+ (long long)defaultAppUsageDiskValue;
+ (BOOL)enableLowSpaceDetection;
+ (BOOL)shouldCheckDiskSpace;
+ (long long)getDefaultDiskFreeSpaceValue;
+ (long long)getDefaultAppUsageDiskValue;
+ (void)monitorOutOfSpace:isWriteError:;
+ (void)monitorOutOfSpace:;
+ (void)checkDiskSpaceWithCompletion:;
+ (void)checkDiskFreeSpaceAvailable;
+ (void)checkErrorInfo:;
@end
