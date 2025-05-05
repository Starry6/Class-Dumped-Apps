@interface SFAddSavedAccountViewController : UITableViewController
@property (nonatomic) <SFAddSavedAccountViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)textFieldShouldReturn:;
- (id)init;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (BOOL)tableView:shouldHighlightRowAtIndexPath:;
- (void)textFieldDidBeginEditing:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (void)_cancelBarButtonItemTapped:;
- (void)_doneBarButtonItemTapped:;
- (void)_textFieldChanged:;
- (id)initWithSuggestedDomain:;
- (void)_updateTextSuggestionsForTextField:;
- (void)_updateTextInputSuggestionsForUserNameField;
- (void)_updateTextInputSuggestionsForPasswordField;
- (void)_savePasswordAndDismiss;
@end
