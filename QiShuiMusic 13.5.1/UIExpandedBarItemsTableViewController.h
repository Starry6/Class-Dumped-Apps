@interface UIExpandedBarItemsTableViewController : UITableViewController
@property (nonatomic) UIBarButtonItemGroup barButtonGroup;
- (id)tableView:cellForRowAtIndexPath:;
- (double)tableView:heightForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (id)preferredContentSize;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (id)_visibleItems;
- (id)initWithBarButtonGroup:;
- (unsigned long long)_numberOfItems;
- (id)_displayTitleForBarButtonItem:;
- (id)barButtonGroup;
@end
