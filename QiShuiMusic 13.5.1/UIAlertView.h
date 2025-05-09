@interface UIAlertView : UIView
@property (nonatomic) RACDelegateProxy rac_delegateProxy;
@property (nonatomic) @ context;
@property (nonatomic) q defaultButtonIndex;
@property (nonatomic) q numberOfRows;
@property (nonatomic) NSString subtitle;
@property (nonatomic) UIViewController externalViewControllerForPresentation;
@property (nonatomic) NSString bodyText;
@property (nonatomic) BOOL groupsTextFields;
@property (nonatomic) @ delegate;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) q numberOfButtons;
@property (nonatomic) q cancelButtonIndex;
@property (nonatomic) q firstOtherButtonIndex;
@property (nonatomic) BOOL visible;
@property (nonatomic) q alertViewStyle;
- (id)rac_buttonClickedSignal;
- (id)rac_delegateProxy;
- (id)rac_willDismissSignal;
- (id)initWithTitle:message:delegate:cancelButtonTitle:;
- (id)bodyText;
- (void)dismiss;
- (id)keyboard;
- (void)setBodyText:;
- (BOOL)_isAnimating;
- (void)dismissAnimated:;
- (void)dealloc;
- (void)setMessage:;
- (id)context;
- (id)textField;
- (void)setDelegate:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)_setAccessoryView:;
- (void)show;
- (id)initWithFrame:;
- (void)layout;
- (id)title;
- (void)setNumberOfRows:;
- (id)delegate;
- (id)message;
- (void).cxx_destruct;
- (long long)numberOfRows;
- (id)subtitle;
- (BOOL)isVisible;
- (id)_titleLabel;
- (id)window;
- (void)setContext:;
- (id)titleLabel;
- (id)tableView;
- (id)_alertController;
- (long long)addButtonWithTitle:;
- (id)buttonTitleAtIndex:;
- (long long)numberOfButtons;
- (void)setCancelButtonIndex:;
- (long long)cancelButtonIndex;
- (void)_setFirstOtherButtonIndex:;
- (long long)firstOtherButtonIndex;
- (void)dismissWithClickedButtonIndex:animated:;
- (void)_performPresentationDismissalWithClickedButtonIndex:animated:;
- (id)_preparedAlertActionAtIndex:;
- (void)_prepareAlertActions;
- (BOOL)_prepareToDismissForTappedIndex:;
- (void)_dismissForTappedIndex:;
- (void)_setIsPresented:;
- (id)addButtonWithTitle:label:;
- (void)_textDidChangeInTextField:;
- (id)initWithTitle:buttons:defaultButtonIndex:delegate:context:;
- (id)initWithTitle:message:delegate:defaultButton:cancelButton:otherButtons:;
- (id)initWithTitle:message:delegate:cancelButtonTitle:otherButtonTitles:;
- (void)_updateButtonTitle:buttonIndex:;
- (void)_updateMessageAndSubtitle;
- (void)setAlertViewStyle:;
- (long long)alertViewStyle;
- (id)addButtonWithTitle:buttonClass:;
- (void)setDefaultButtonIndex:;
- (long long)defaultButtonIndex;
- (void)_updateFirstOtherButtonEnabledState;
- (int)buttonCount;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (id)_addTextFieldWithValue:label:;
- (id)addTextFieldWithValue:label:;
- (int)textFieldCount;
- (id)textFieldAtIndex:;
- (void)_showAnimated:;
- (id)backgroundSize;
- (void)setGroupsTextFields:;
- (BOOL)groupsTextFields;
- (id)_addButtonWithTitle:;
- (void)setTableShouldShowMinimumContent:;
- (id)_externalViewControllerForPresentation;
- (void)_setExternalViewControllerForPresentation:;
+ (void)showAlertViewForRequestOperationWithErrorOnCompletion:delegate:;
+ (void)showAlertViewForRequestOperationWithErrorOnCompletion:delegate:cancelButtonTitle:otherButtonTitles:;
+ (void)showAlertViewForTaskWithErrorOnCompletion:delegate:;
+ (void)showAlertViewForTaskWithErrorOnCompletion:delegate:cancelButtonTitle:otherButtonTitles:;
+ (id)_remoteAlertViewWithBlock:;
+ (id)_alertViewForSessionWithRemoteViewController:;
+ (id)_alertViewForWindow:;
@end
