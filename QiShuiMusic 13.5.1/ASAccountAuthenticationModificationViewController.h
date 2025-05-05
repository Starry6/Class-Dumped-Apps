@interface ASAccountAuthenticationModificationViewController : UIViewController
@property (nonatomic) ASAccountAuthenticationModificationExtensionContext extensionContext;
- (void)cancelRequest;
- (id)extensionContext;
- (void)convertAccountToSignInWithAppleWithoutUserInteractionForServiceIdentifier:existingCredential:userInfo:;
- (void)prepareInterfaceToConvertAccountToSignInWithAppleForServiceIdentifier:existingCredential:userInfo:;
- (void)changePasswordWithoutUserInteractionForServiceIdentifier:existingCredential:newPassword:userInfo:;
- (void)prepareInterfaceToChangePasswordForServiceIdentifier:existingCredential:newPassword:userInfo:;
@end
