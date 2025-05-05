@interface FBSystemAppProxyServiceServer : FBSServiceFacility
- (void)_handleGetProcessHandle:forClient:;
- (void)noteClientDidConnect:withMessage:;
- (void)_handleShutdown:forClient:;
- (void)_handleGetPasscodeLockedOrBlockedStatus:forClient:;
- (void)_handleActions:forClient:;
- (void)_handleTerminateApplicationGroup:forClient:;
- (void).cxx_destruct;
- (void)_handleTerminateApplication:forClient:;
- (void)noteDidReceiveMessage:withType:fromClient:;
- (void)_handleSystemApplicationBundleIdentifier:forClient:;
- (void)noteClientDidDisconnect:;
- (id)_initWithQueue:;
+ (id)targetQueue;
+ (id)sharedInstance;
@end
