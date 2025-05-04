@interface AWENoticePrivacySettingActionSheet : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) UIView headerView;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) NSNumber selectIndex;
@property (nonatomic) @? closeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)selectIndex;
- (void)setSelectIndex:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)tableView;
- (void)cancel;
- (id)headerView;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setDataSource:;
- (void)setHeaderView:;
- (id)dataSource;
+ (id)sheetWithModels:headerText:;
+ (id)sheetWithModels:headerText:headerTitleText:;
@end
