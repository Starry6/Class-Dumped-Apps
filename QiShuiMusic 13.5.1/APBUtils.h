@interface APBUtils : NSObject
+ (void)APBMainThread:;
+ (BOOL)isWifiConnected;
+ (id)localizedStringForKey:inBundle:;
+ (id)MD5WithData:;
+ (id)convertToJSONString:;
+ (id)dictionaryWithJsonString:;
+ (long long)getAvailableDiskSize;
+ (long long)getTotalDiskSize;
+ (id)maxResolution:;
+ (id)randomString:;
+ (id)deviceVersion;
+ (id)appVersion;
+ (id)osVersion;
+ (id)localizedStringForKey:;
+ (id)appName;
+ (BOOL)isWifi;
+ (id)currentLanguage;
+ (id)cameraWithPosition:;
@end
