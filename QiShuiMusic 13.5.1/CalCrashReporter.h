@interface CalCrashReporter : NSObject
+ (BOOL)isAvailable;
+ (void)simulateCrashWithMessage:;
@end
