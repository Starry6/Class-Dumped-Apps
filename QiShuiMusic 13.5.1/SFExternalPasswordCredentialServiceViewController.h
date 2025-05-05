@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)passcodePromptForContext:;
- (id)authenticationCustomUIProgressObserverForContext:;
- (id)authenticationMessageForContext:;
- (void)credentialProviderExtensionManagerExtensionListDidChange:;
- (BOOL)displayMessageAsTitleForContext:;
- (void).cxx_destruct;
- (void)_dismiss;
- (id)initWithNibName:bundle:;
- (id)_authenticationContext;
- (void)autoFillWithCredentialIdentity:;
- (void)getCredentialForCredentialIdentity:completion:;
- (void)presentUIForPasswordCredentialAuthenticationViewController:;
- (void)passwordCredentialAuthenticationViewController:didFinishWithCredential:error:completion:;
- (BOOL)contextRequiresSessionBasedAuthentication:;
- (BOOL)contextShouldAllowPasscodeFallback:;
- (BOOL)contextShouldAllowMultipleBiometricFailures:;
- (void)_finishRequestToAutoFillCredential:extensionShowedUI:error:completion:;
- (void)_finishRequestToReturnCredential:extensionShowedUI:error:completion:;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@end
