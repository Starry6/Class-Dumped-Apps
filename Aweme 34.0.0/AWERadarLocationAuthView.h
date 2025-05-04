@interface AWERadarLocationAuthView : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) @? authBtnBlock;
@property (nonatomic) @? needClearBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)setAuthBtnBlock:;
- (void)setNeedClearBlock:;
- (id)authBtnBlock;
- (id)needClearBlock;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (void)setTableView:;
- (id)tableView;
- (double)contentHeight;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setDataSource:;
- (id)dataSource;
@end
