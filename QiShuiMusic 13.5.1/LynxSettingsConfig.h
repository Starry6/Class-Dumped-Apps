@interface LynxSettingsConfig : NSObject
+ (id)deviceModelString;
+ (BOOL)enabled;
+ (id)settingsURL;
+ (void)fetchSettings:;
+ (BOOL)isNewUser;
@end
