@interface AWERunningProtect : NSObject
+ (void)onLastCrashDetected;
+ (BOOL)quickCheckLastSessionCrash;
+ (BOOL)needProtectThisSession;
+ (void)config;
+ (void)start;
@end
