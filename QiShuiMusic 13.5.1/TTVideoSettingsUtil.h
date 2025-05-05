@interface TTVideoSettingsUtil : NSObject
+ (float)OSVersionNumber;
+ (id)getSysInfoByName:;
+ (id)requestWithURL:completion:;
+ (id)requestWithURL:params:headers:completion:;
+ (id)settingURLString;
+ (id)appName;
+ (id)callerName;
+ (id)platform;
+ (id)platformString;
+ (unsigned long long)platformType;
+ (id)devicePlatform;
@end
