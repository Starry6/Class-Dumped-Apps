@interface AWEPaySwiftImpl.TransSendVC : UIViewController
@property (nonatomic) q preferredStatusBarStyle;
- (void)backButtonClicked;
- (void)jumpUserProfileWithGesture:;
- (void)sendTransferAccounts;
- (void)dealloc;
- (void)keyboardWillHideWithNotification:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (BOOL)textFieldShouldReturn:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)keyboardWillShowWithNotification:;
- (void)viewDidAppear:;
- (id)initWithCoder:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)textFieldDidChangeWithTextField:;
@end
