@interface AWECloudHardWireUtility : NSObject
+ (BOOL)debuggerAttached;
+ (BOOL)multitaskingEnabled;
+ (BOOL)proximitySensorEnabled;
+ (id)systemDeviceTypeFormatted:;
+ (id)deviceModel;
+ (long long)screenWidth;
+ (long long)screenHeight;
+ (id)deviceName;
+ (float)screenBrightness;
+ (id)systemName;
+ (id)systemVersion;
+ (BOOL)pluggedIn;
+ (id)systemUptime;
@end
