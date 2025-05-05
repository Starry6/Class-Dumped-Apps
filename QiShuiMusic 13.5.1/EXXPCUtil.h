@interface EXXPCUtil : NSObject
+ (int)servicePidFromXPCConnection:;
+ (id)sharedInstance;
+ (void)assertIsExtensionProcess;
+ (void)checkInWithLaunchd;
+ (int)addExternalServiceForPid:path:overlay:;
@end
