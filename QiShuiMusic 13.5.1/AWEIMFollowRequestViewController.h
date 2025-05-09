@interface AWEIMFollowRequestViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMFollowRequestListDataController followRequestListDataController;
@property (nonatomic) BOOL isInRefreshStatus;
@property (nonatomic) IESIMUILoadingView loadingView;
@property (nonatomic) NSString gdLabel;
@property (nonatomic) NSString pushID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)followRequestListDataController;
- (id)gdLabel;
- (void)p_endRefreshing;
- (void)backBtnClicked;
- (BOOL)checkIfHasMore;
- (BOOL)configWithRouterParamDict:;
- (void)didFinishBlockUser:status:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)followRequestTableViewCellDidApprove:cell:;
- (void)followRequestTableViewCellDidFollowBack:cell:;
- (void)followRequestTableViewCellDidRefuse:cell:;
- (void)followRequestTableViewCellDidUnFollow:cell:;
- (id)iesimui_emptyPageConfigForState:;
- (id)iesimui_emptyPageEdgeInsets;
- (BOOL)isInRefreshStatus;
- (void)p_handleEmptyPage;
- (void)p_loadMoreData;
- (void)p_refreshData:;
- (void)p_setupNavUI;
- (void)p_setupUI;
- (id)pushID;
- (void)sendUpdateFollowRequestCount;
- (void)setFollowRequestListDataController:;
- (void)setGdLabel:;
- (void)setIsInRefreshStatus:;
- (void)setPushID:;
- (id)init;
- (void)dealloc;
- (id)tableView:cellForRowAtIndexPath:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setTableView:;
- (double)tableView:heightForHeaderInSection:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (id)loadingView;
- (void)setLoadingView:;
@end
