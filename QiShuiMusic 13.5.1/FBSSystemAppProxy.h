@interface FBSSystemAppProxy : FBSServiceFacilityClient
- (void)terminateApplication:forReason:andReport:withDescription:completion:;
- (void)terminateApplicationGroup:forReason:andReport:withDescription:completion:;
- (void)shutdownWithOptions:;
- (void)handleMessage:withType:;
- (void)sendActions:withResult:;
- (void)checkin;
- (void)_sendMessageType:withMessage:withReplyHandler:waitForReply:;
- (void)_handleConnect:;
- (id)systemApplicationBundleIdentifier;
- (void)fireCompletion:error:;
- (id)processHandleForBundleID:;
- (BOOL)isPasscodeLockedOrBlocked;
- (id)clientCallbackQueue;
- (void)fireCompletion:openAppErrorCode:;
- (void).cxx_destruct;
- (void)_handleTerminationReply:withCompletion:;
- (void)setKeyboardFocusApplication:deferringToken:completion:;
+ (id)checkoutProxyWithEndpoint:;
@end
