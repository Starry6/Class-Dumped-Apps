@interface ASAccountAuthenticationModificationServiceViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:userInfo:completion:;
- (void)accountModificationHostViewController:didFinishWithCredential:userInfo:completion:;
- (void)presentUIForAccountModificationHostViewController:;
- (void)dismissUIForAccountModificationHostViewController:;
- (void)accountModificationHostViewController:requestCanceledWithError:completion:;
- (void)upgradeCredentialToSignInWithApple:forServiceIdentifier:userInfo:extensionUUID:;
- (void)updateCredential:forServiceIdentifier:userInfo:extensionUUID:;
- (void)_upgradeCredentialToSignInWithApple:forServiceIdentifier:userInfo:extension:;
- (void)_updateCredential:forServiceIdentifier:userInfo:extension:;
- (void)_findExtensionSupportingUpgrade:withCompletionHandler:;
- (BOOL)_ensureHostHasAccountModificationEntitlement;
- (void)_deleteExistingKeychainCredentialIfPossible;
- (void)_updateKeychainWithNewCredential:;
- (BOOL)_isKeychainSyncEnabled;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@end
