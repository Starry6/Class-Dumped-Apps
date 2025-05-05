@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext
@property (nonatomic) RUIStyle remoteUIStyle;
@property (nonatomic) NSString password;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPassword:;
- (id)password;
- (void).cxx_destruct;
- (void)presentBasicLoginUIWithCompletion:;
- (void)dismissBasicLoginUIWithCompletion:;
- (void)presentLoginAlertWithError:title:message:completion:;
- (void)presentBiometricOrPasscodeValidationForAppleID:completion:;
- (id)remoteUIStyle;
- (void)willPresentModalNavigationController:;
- (void)setRemoteUIStyle:;
@end
