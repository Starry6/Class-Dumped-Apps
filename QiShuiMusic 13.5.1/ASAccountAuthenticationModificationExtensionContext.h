@interface ASAccountAuthenticationModificationExtensionContext : NSExtensionContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelRequest;
- (void)cancelRequestWithError:;
- (void)upgradeCredentialToSignInWithApple:serviceIdentifier:userInfo:;
- (void)prepareInterfaceToUpgradeCredentialToSignInWithApple:serviceIdentifier:userInfo:completion:;
- (void)updatePasswordForServiceIdentifier:existingCredential:newPassword:userInfo:;
- (void)prepareInterfaceToUpdatePasswordForServiceIdentifier:existingCredential:newPassword:userInfo:completion:;
- (void)getSignInWithAppleUpgradeAuthorizationWithState:nonce:completionHandler:;
- (void)completeUpgradeToSignInWithAppleWithUserInfo:;
- (void)completeChangePasswordRequestWithUpdatedCredential:userInfo:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
