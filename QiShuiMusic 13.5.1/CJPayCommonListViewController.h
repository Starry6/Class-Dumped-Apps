@interface CJPayCommonListViewController : CJPayFullPageBaseViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) CJPayBaseListDataSource dataSource;
@property (nonatomic) @? cellWillDisplayBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellWillDisplayBlock;
- (void)handleWithEventName:data:;
- (void)setCellWillDisplayBlock:;
- (void)setDataSource:;
- (id)tableView:cellForRowAtIndexPath:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (id)dataSource;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (double)tableView:heightForHeaderInSection:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)reloadTableViewData;
@end
