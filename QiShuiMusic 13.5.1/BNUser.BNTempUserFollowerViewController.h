@interface BNUser.BNTempUserFollowerViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) _TtC15BNCommonAdapter10BNUserInfo currentInfo;
- (id)etPageName;
- (id)etSceneName;
- (id)tableView:cellForRowAtIndexPath:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (double)tableView:heightForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)setCurrentInfo:;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (id)currentInfo;
@end
