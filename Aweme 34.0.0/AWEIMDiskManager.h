@interface AWEIMDiskManager : NSObject
+ (void)registerDiskCacheConfig;
+ (void)syncStartDiskCleanIfNeeded;
+ (id)extraCleanPaths;
+ (void)_registerDiskCacheRuleConfig;
+ (void)transformForAWEIMDYOfficialDataManagerReverse:;
+ (void)transformForAWEIMActivityDynamicResourceManagerReverse:;
+ (void)transformForAWEIMProjectXConfigManagerReverse:;
+ (void)transformForAWEIMContactWCDBManagerReverse:;
+ (void)moveDirItems:to:reverse:;
+ (id)cleanPathsOfCurrentUser;
+ (void)startCleanPaths:;
+ (void)_transfromDataIfNeedWithReverse:;
+ (id)config;
+ (long long)totalCacheSize;
@end
