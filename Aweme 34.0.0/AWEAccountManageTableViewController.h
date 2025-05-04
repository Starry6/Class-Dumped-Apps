@interface AWEAccountManageTableViewController : AWESettingBaseViewController
@property (nonatomic) AWEAccountManageViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishBindPhone;
- (void)didFinishSetPassword;
- (void)didFinishUpdateAwemeUser;
- (BOOL)configWithRouterParamDict:;
- (id)vcTitle;
- (BOOL)isHitAccountManageWithGroup;
- (void)refreshTableView;
- (id)initWithPreRedDot:;
- (id)tableView:viewForHeaderInSection:;
- (void)dealloc;
- (id)viewModel;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)tableView:viewForFooterInSection:;
- (void)setupView;
@end
