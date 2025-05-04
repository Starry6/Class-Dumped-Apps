@interface AWECloudHardWireUtility : NSObject
+ (id)hmd_screenBounds;
+ (id)systemDeviceTypeFormatted:;
+ (BOOL)multitaskingEnabled;
+ (BOOL)proximitySensorEnabled;
+ (BOOL)debuggerAttached;
+ (id)systemVersion;
+ (id)deviceName;
+ (long long)screenWidth;
+ (long long)screenHeight;
+ (BOOL)pluggedIn;
+ (id)systemName;
+ (id)deviceModel;
+ (float)screenBrightness;
+ (id)systemUptime;
@end
