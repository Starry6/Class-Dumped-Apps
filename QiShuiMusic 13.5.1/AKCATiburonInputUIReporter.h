@interface AKCATiburonInputUIReporter : AKCAReporter
- (id)initWithRequestID:;
- (void)setPasswordCredentialCount:;
- (void)didShowAppleID:;
- (void)didSelectAnonymousEmail:;
- (void)didSelectAppleID:;
- (void)didSelectPasswordCredential:;
- (void)didModifyName:;
- (void)didComplete:;
- (void)_clearMutuallyExclusiveProperties:;
@end
