@interface SFPasswordSavingRemoteViewController : SFPasswordRemoteViewController
- (void).cxx_destruct;
- (void)performUpgradeToSignInWithAppleForCredential:serviceIdentifier:;
- (void)performUpgradeToStrongPasswordForCredential:serviceIdentifier:;
- (void)accountAuthenticationModificationController:didSuccessfullyCompleteRequest:withUserInfo:;
- (void)accountAuthenticationModificationController:didFailRequest:withError:;
- (id)presentationAnchorForAccountAuthenticationModificationController:;
- (id)_accountAuthenticationModificationController;
+ (id)serviceViewControllerInterface;
+ (id)passwordServiceViewControllerName;
@end
