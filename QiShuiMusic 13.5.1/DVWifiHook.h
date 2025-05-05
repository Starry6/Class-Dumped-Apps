@interface DVWifiHook : NSObject
+ (BOOL)wifiHookEnabled;
+ (void)setWifiHookEnabled:;
+ (id)getCurrentSSIDInfo;
+ (void)saveCurrentWifi;
@end
