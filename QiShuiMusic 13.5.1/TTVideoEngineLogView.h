@interface TTVideoEngineLogView : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSMutableArray datas;
- (void)addLogInfo:type:;
- (void)dealloc;
- (void)layoutSubviews;
- (id)tableView:cellForRowAtIndexPath:;
- (id)initWithFrame:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (double)tableView:heightForHeaderInSection:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (id)datas;
- (void)setDatas:;
- (void)setUpUI;
- (void)clearLogs;
@end
