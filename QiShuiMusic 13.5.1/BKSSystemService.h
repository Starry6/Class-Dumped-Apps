@interface BKSSystemService : NSObject
- (id)init;
- (unsigned int)createClientPort;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:forReason:andReport:withDescription:;
- (void)openApplication:options:clientPort:withResult:;
- (void)cleanupClientPort:;
- (void)openApplication:options:withResult:;
- (void).cxx_destruct;
- (int)pidForApplication:;
- (void)openURL:application:options:clientPort:withResult:;
- (BOOL)canOpenApplication:reason:;
@end
