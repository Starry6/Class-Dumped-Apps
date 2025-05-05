@interface WKSelectTableViewController : UITableViewController
@property (nonatomic) BOOL shouldDismissWithAnimation;
@property (nonatomic) WKSelectPopover popover;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setPopover:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)viewWillAppear:;
- (id)tableView:titleForHeaderInSection:;
- (id)popover;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (long long)findItemIndexAt:;
- (id)initWithView:hasGroups:;
- (void)populateCell:withItem:;
- (id)findItemAt:;
- (BOOL)shouldDismissWithAnimation;
@end
