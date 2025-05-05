@interface UIDebuggingInformationListTableViewController : UITableViewController
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)initWithStyle:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (void)toggleOverlayFullscreen;
- (void)toggleOverlayVisibility;
- (void)addTopLevelViewController:forName:;
- (id)topLevelViewControllerForName:;
@end
