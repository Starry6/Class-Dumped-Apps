@interface AKAuthorizationEmailEditPaneViewController : AKAuthorizationPaneViewController
@property (nonatomic) AKAuthorizationScopeChoices editableScopeChoices;
@property (nonatomic) NSString applicationName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tableView:cellForRowAtIndexPath:;
- (id)applicationName;
- (BOOL)tableView:shouldHighlightRowAtIndexPath:;
- (void)viewWillDisappear:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)tableView:titleForHeaderInSection:;
- (void)setApplicationName:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (id)tableView:titleForFooterInSection:;
- (id)editableScopeChoices;
- (id)tableView:emailCellForRow:;
- (id)tableView:anonymousCellForRow:;
@end
