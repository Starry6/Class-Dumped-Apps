@interface PSSearchResultsController : UIViewController
@property (nonatomic) PSSearchResults searchResults;
@property (nonatomic) <PSSearchResultsControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadData;
- (id)init;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (id)searchResults;
- (void)scrollViewDidScroll:;
- (void)setSearchResults:;
- (double)tableView:heightForRowAtIndexPath:;
- (double)tableView:estimatedHeightForRowAtIndexPath:;
- (void)viewWillLayoutSubviews;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)loadView;
- (void)tableViewDidFinishReload:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)_removeIconViewForSection:;
- (void)_updateIconViews:;
@end
