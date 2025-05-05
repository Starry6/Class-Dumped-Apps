@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext
@property (nonatomic) UINavigationController navigationController;
@property (nonatomic) NSString usernameForCreating;
@property (nonatomic) NSString passwordForCreating;
- (id)init;
- (id)navigationController;
- (void).cxx_destruct;
- (void)setNavigationController:;
- (void)presentBasicLoginUIWithCompletion:;
- (void)dismissBasicLoginUIWithCompletion:;
- (void)presentLoginAlertWithError:title:message:completion:;
- (void)presentBiometricOrPasscodeValidationForAppleID:completion:;
- (void)dismissServerProvidedUIWithCompletion:;
- (void)remoteUIController:didReceiveObjectModel:actionSignal:;
- (id)usernameForCreating;
- (id)passwordForCreating;
@end
