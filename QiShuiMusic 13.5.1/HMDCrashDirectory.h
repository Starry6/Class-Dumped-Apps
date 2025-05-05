@interface HMDCrashDirectory : NSObject
+ (id)activeDirectory;
+ (BOOL)checkAndMarkLaunchState;
+ (id)currentDirectory;
+ (id)eventDirectory;
+ (BOOL)isUrgent;
+ (BOOL)lastTimeCrash;
+ (id)lastTimeDirectory;
+ (id)preparedDirectory;
+ (id)processingDirectory;
+ (void)removeLaunchState;
+ (void)setupCurrentFolder;
+ (void)setupDirectory;
+ (void)setupUUID;
+ (id)baseDirectory;
+ (void)setup;
+ (id)UUID;
@end
