@interface IESECAppInfo : NSObject
+ (id)appMethodPrefix;
+ (id)IESECSDKVersion;
+ (id)IESECSDKFormatVersion;
+ (id)currentTargetName;
+ (BOOL)isDouyinSeries;
+ (BOOL)isSaaSTarget;
+ (Class)appInfo;
@end
