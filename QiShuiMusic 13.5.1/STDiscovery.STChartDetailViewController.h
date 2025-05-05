@interface STDiscovery.STChartDetailViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etGroupID;
@property (nonatomic) NSString etGroupType;
- (long long)adaptivePresentationStyleForPresentationController:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (id)tableView:willSelectRowAtIndexPath:;
- (void)tableView:didUnhighlightRowAtIndexPath:;
- (double)tableView:heightForHeaderInSection:;
- (void)tableView:didHighlightRowAtIndexPath:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)scrollViewDidScroll:;
- (id)etGroupID;
- (id)etGroupType;
- (id)etPageName;
- (id)etSceneName;
- (id)initWithCoder:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
