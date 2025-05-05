@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController
@property (nonatomic) <AKAuthorizationPasswordAuthenticationDelegate> delegate;
@property (nonatomic) AKAuthorizationPresentationContext presentationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)keyboardWillShow:;
- (void)dealloc;
- (void)keyboardWillHide:;
- (void)setDelegate:;
- (id)_username;
- (void)viewWillDisappear:;
- (id)presentationContext;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)keyboardDidShow:;
- (void)signInViewController:didAuthenticateWithResults:error:;
- (void)keyboardWillChangeFrame:;
- (void)setPresentationContext:;
- (double)intrinsicContentHeight;
- (id)_contextForAuthentication;
- (void)sizeToFitPaneContentAnimated:;
- (void)layoutViewWithAnimation;
- (void)adjustBottomInsetForKeyboard:;
- (BOOL)isKeyboardAttachedToBottom:;
@end
