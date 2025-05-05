@interface ICUserCredentialProvider : NSObject
- (void)_handleRequestIndependentPropertiesForSession:;
- (id)init;
- (void)_handlePendingDelegationRequestsForSession:;
- (void)performCredentialRequest:withResponseHandler:;
- (void)performCredentialRequests:withResponseHandler:;
- (void)_handleCredentialRequestIdentityPropertiesForSession:;
- (void).cxx_destruct;
- (void)_handleIdentityProperties:forIdentity:loadingError:credentialRequest:session:;
- (void)_handleDelegationAccountUUIDsForSession:;
+ (id)sharedProvider;
@end
