@interface MFGroupDetailViewController : UITableViewController
@property (nonatomic) <MFGroupDetailViewControllerDelegate> delegate;
@property (nonatomic) MFRecentComposeRecipientGroup group;
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
- (long long)numberOfSectionsInTableView:;
- (void)_removeButtonTapped:;
@end
