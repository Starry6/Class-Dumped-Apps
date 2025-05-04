@interface AWEPublishVideoSyncContentViewController : AWEPublishHalfScreenContentViewController
@property (nonatomic) UIView headerView;
@property (nonatomic) UIView headerBar;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEPublishVideoSyncDataModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headerBar;
- (void)setHeaderBar:;
- (void)registerTableViewCellReuse;
- (void)setModel:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)initWithModel:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (id)headerView;
- (double)contentHeight;
- (id)model;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setHeaderView:;
- (BOOL)accessibilityPerformEscape;
- (void)setupViews;
@end
