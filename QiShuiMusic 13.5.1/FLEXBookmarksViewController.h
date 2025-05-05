@interface FLEXBookmarksViewController : FLEXTableViewController
@property (nonatomic) NSArray bookmarks;
@property (nonatomic) FLEXExplorerViewController corePresenter;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void)reloadData;
- (void)setupDefaultBarItems;
- (void)setupEditingBarItems;
- (id)corePresenter;
- (void)dismissAnimated;
- (void)dismissAnimated:;
- (void)toggleEditing;
- (void)closeAllButtonPressed:;
- (void)closeAll;
- (long long)tableView:numberOfRowsInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)tableView:didDeselectRowAtIndexPath:;
- (BOOL)tableView:canEditRowAtIndexPath:;
- (void)tableView:commitEditingStyle:forRowAtIndexPath:;
- (id)bookmarks;
- (void)setBookmarks:;
- (void).cxx_destruct;
@end
