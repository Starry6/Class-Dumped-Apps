@interface AWETeenGeneralSettingViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWETeenGeneralSettingViewModel viewModel;
@property (nonatomic) q colorStyle;
@property (nonatomic) UILabel versionLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)backBtnClick:;
- (id)versionLabel;
- (void)setVersionLabel:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)tableView;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (long long)colorStyle;
- (void)setColorStyle:;
@end
