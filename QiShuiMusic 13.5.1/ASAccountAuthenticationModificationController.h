@interface ASAccountAuthenticationModificationController : NSObject
@property (nonatomic) <ASAccountAuthenticationModificationControllerDelegate> delegate;
@property (nonatomic) <ASAccountAuthenticationModificationControllerPresentationContextProviding> presentationContextProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDelegate:;
- (void)_invalidate;
- (id)delegate;
- (void).cxx_destruct;
- (void)performRequest:;
- (void)setPresentationContextProvider:;
- (id)_viewControllerToPresentFrom;
- (void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:userInfo:completion:;
- (void)accountModificationRemoteViewController:didFinishWithCredential:userInfo:completion:;
- (void)accountModificationRemoteViewController:requestCanceledWithError:completion:;
- (void)presentAccountModificationRemoteViewController:;
- (void)dismissAccountModificationRemoteViewController:;
- (void)accountModificationRemoteViewController:viewServiceDidTerminateWithError:;
- (id)presentationContextProvider;
- (void)_requestRemoteViewController:;
- (void)_performReplacePasswordWithSignInWithAppleRequest:;
- (void)_showUpgradeToStrongPasswordPromptForRequest:;
- (void)_performUpgradePasswordToStrongPasswordRequest:;
- (void)_failRequestWithError:;
@end
