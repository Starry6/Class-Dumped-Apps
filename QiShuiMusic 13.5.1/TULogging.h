@interface TULogging : NSObject
+ (void)enablePhoneLogging;
+ (void)disablePhoneLogging;
+ (void)registerForShouldLogChangedNotification;
+ (void)unregisterForShouldLogChangedNotification;
+ (BOOL)sendDirectoryToCrashReporter:error:;
@end
