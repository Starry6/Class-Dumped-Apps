@interface AKBasicLoginViewController : OBWelcomeController
@property (nonatomic) AKAppleIDAuthenticationInAppContext context;
@property (nonatomic) UIView loginOptions;
@property (nonatomic) AKBasicLoginOptionsViewController loginOptionsViewController;
@property (nonatomic) @? passwordHandler;
@property (nonatomic) BOOL isPasswordFieldVisible;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSLayoutConstraint heightAnchor;
@property (nonatomic) AKBasicLoginTableViewCell usernameCell;
@property (nonatomic) AKBasicLoginTableViewCell passwordCell;
@property (nonatomic) AKBasicLoginActions loginActions;
@property (nonatomic) <AKBasicLoginControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_title;
- (BOOL)textFieldShouldReturn:;
- (void)_keyboardDidHide:;
- (long long)modalPresentationStyle;
- (id)context;
- (id)tableView:cellForRowAtIndexPath:;
- (void)_keyboardWillShow:;
- (void)setDelegate:;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:;
- (void)startAnimating;
- (void)stopAnimating;
- (void)viewWillDisappear:;
- (double)tableView:estimatedHeightForRowAtIndexPath:;
- (id)delegate;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)setTableView:;
- (void)loadView;
- (void)setContext:;
- (void)viewDidLayoutSubviews;
- (id)tableView;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (long long)tableView:numberOfRowsInSection:;
- (id)_cancelBarButtonItem;
- (id)_tableView;
- (void)_setContentInset:;
- (id)heightAnchor;
- (void)context:needsPasswordWithCompletion:;
- (BOOL)isPresentedModally;
- (id)_passwordCell;
- (void)setHeightAnchor:;
- (void)_updatePlaceholderIfNeeded;
- (void)_cancelPressed:;
- (void)_signInPressed:;
- (void)clearPasswordField;
- (BOOL)_shouldShowUserName;
- (BOOL)_shouldShowPassword;
- (id)_loginOptions;
- (id)_signInBarButtonItem;
- (void)_setPasswordHiddenIfNeeded;
- (void)initializePasswordCellTextField:;
- (void)initializeUsernameCellTextField:;
- (void)_initializeView;
- (id)passwordCellTextField;
- (id)usernameCellTextField;
- (id)_usernameCell;
- (id)loginActions;
- (void)setLoginActions:;
- (id)loginOptions;
- (void)setLoginOptions:;
- (id)loginOptionsViewController;
- (void)setLoginOptionsViewController:;
- (id)passwordHandler;
- (void)setPasswordHandler:;
- (BOOL)isPasswordFieldVisible;
- (void)setIsPasswordFieldVisible:;
- (id)usernameCell;
- (void)setUsernameCell:;
- (id)passwordCell;
- (void)setPasswordCell:;
@end
