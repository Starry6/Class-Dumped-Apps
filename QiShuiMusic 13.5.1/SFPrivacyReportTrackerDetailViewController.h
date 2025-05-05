@interface SFPrivacyReportTrackerDetailViewController : UITableViewController
- (id)initWithTracker:;
- (id)tableView:cellForRowAtIndexPath:;
- (BOOL)tableView:shouldHighlightRowAtIndexPath:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)viewLayoutMarginsDidChange;
- (id)tableView:titleForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (void)_updateHeaderSize;
@end
