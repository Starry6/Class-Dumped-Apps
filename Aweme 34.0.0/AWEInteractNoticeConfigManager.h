@interface AWEInteractNoticeConfigManager : NSObject
@property (nonatomic) UIView naviBarLoadingView;
@property (nonatomic) AWEUITextLoadingView loadingView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL shouldTrackDiffCacheAndServer;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)showLoadingViewAtNaviBar:;
- (void)refreshNoticeWithOldDataSource:newDataSource:;
- (void)hiddenLoadingView;
- (void)showLoadingViewAtNavigationBar:withRightMargin:;
- (void)setShouldTrackDiffCacheAndServer:;
- (void)setNaviBarLoadingView:;
- (id)naviBarLoadingView;
- (void)_updateDiffTableViewWithOldDataSource:newDataSource:;
- (BOOL)shouldTrackDiffCacheAndServer;
- (void)trackDiffDatasourceWithDeleteCount:insertCount:updateCount:;
- (void)setTableView:;
- (void)setLoadingView:;
- (id)tableView;
- (id)loadingView;
- (void).cxx_destruct;
@end
