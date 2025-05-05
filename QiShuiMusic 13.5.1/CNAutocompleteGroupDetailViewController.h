@interface CNAutocompleteGroupDetailViewController : UITableViewController
@property (nonatomic) <CNAutocompleteGroupDetailViewControllerDelegate> delegate;
@property (nonatomic) CNRecentComposeRecipientGroup group;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (void)setGroup:;
- (id)group;
- (void)viewWillDisappear:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)initWithStyle:;
- (long long)tableView:numberOfRowsInSection:;
- (void)_removeButtonTapped:;
@end
