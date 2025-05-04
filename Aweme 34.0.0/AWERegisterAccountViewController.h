@interface AWERegisterAccountViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray listData;
@property (nonatomic) @? addAccountAction;
@property (nonatomic) @? createAccountAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)backAction:;
- (id)listData;
- (id)addAccountAction;
- (id)initWithAddAccountAction:createAccountAction:;
- (void)setAddAccountAction:;
- (void)setListData:;
- (void)setCreateAccountAction:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupData;
- (id)createAccountAction;
@end
