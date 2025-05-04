@interface AWETrackerProjectInfo : NSObject
+ (id)versionName;
+ (id)ssAppID;
+ (BOOL)isCurrentAppScheme:;
+ (id)bundleIdentifier;
+ (id)platformName;
+ (id)appName;
+ (id)appDisplayName;
@end
