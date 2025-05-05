@interface TKTokenAccessUserPromptRemoteAlert : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)remoteAlertHandle:didInvalidateWithError:;
- (void)remoteAlertHandleDidDeactivate:;
- (void)remoteAlertHandleDidActivate:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)registerTokenAccessRequestCorrelationID:granted:reply:;
- (long long)preflightStatus;
- (long long)promptUserToEvaluateRequest:error:;
@end
