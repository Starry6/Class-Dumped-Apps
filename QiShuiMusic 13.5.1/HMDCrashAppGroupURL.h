@interface HMDCrashAppGroupURL : NSObject
+ (id)appGroupRootURL;
+ (id)appGroupCrashFilesURL;
+ (id)appGroupCrashSettingsURL;
+ (id)appGroupHeimdallrRootURL;
+ (void)createFileOrDirectoryAtURLIfNeeded:createDir:;
@end
