@interface PLDiskController : NSObject
- (id)init;
- (void)dealloc;
- (void)_diskSpaceDidBecomeLow;
- (BOOL)hasEnoughDiskToTakePicture;
- (long long)bytesToAutomaticallyClear;
- (void)_actuallyUpdateCookie;
- (void)_updateCookie;
- (void)updateAvailableDiskSpace;
+ (id)mountPointForPath:;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:;
+ (id)sharedInstance;
+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForPath:;
+ (long long)fileSystemSizeForPath:;
+ (long long)diskSpaceAvailableForUse;
@end
