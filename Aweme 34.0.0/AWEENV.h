@interface AWEENV : NSObject
+ (BOOL)isByTest;
+ (BOOL)isSafTest;
+ (id)plistChannel;
+ (BOOL)isTestEnv;
+ (BOOL)isTestFlight;
+ (BOOL)isLite;
+ (BOOL)isDebugEnv;
+ (BOOL)isStaff;
+ (BOOL)isI18N;
+ (BOOL)isBetaEnv;
+ (BOOL)isTestEvn;
+ (BOOL)isBetaEvn;
+ (BOOL)isDebugEvn;
+ (BOOL)safShouldRecordInitializer;
+ (BOOL)safShouldRecordLazyRegister;
+ (BOOL)safShouldRecordLaunchTask;
+ (long long)channel;
+ (BOOL)isPad;
@end
