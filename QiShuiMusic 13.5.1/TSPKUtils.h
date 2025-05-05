@interface TSPKUtils : NSObject
+ (void)assert:message:;
+ (double)getRelativeTime;
+ (void)logWithMessage:;
+ (id)topViewControllerForController:;
+ (id)appStatusString;
+ (id)concateClassName:method:joiner:;
+ (id)appStatusWithDefault:;
+ (id)appendUnitName:toRouter:;
+ (id)concateClassName:method:;
+ (id)createDefaultInstance:defalutValue:;
+ (long long)createDefaultValue:defalutValue:;
+ (id)decodeBase64String:;
+ (void)exectuteOnMainThread:;
+ (id)fuseError;
+ (double)getIncrementTime;
+ (double)getUnixTime;
+ (id)jsonStringEncodeWithObj:;
+ (void)logWithTag:message:;
+ (id)settingVersion;
+ (id)topVCName;
+ (id)version;
+ (id)generateUUID;
+ (long long)appID;
@end
