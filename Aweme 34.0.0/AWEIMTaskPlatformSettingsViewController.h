@interface AWEIMTaskPlatformSettingsViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMTaskPlatformTracker taskPlatformTracker;
@property (nonatomic) NSMutableArray viewModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (void)renderModel:context:;
- (void)backBtnClicked;
- (id)taskPlatformTracker;
- (void)setTaskPlatformTracker:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setupUI;
- (void)setViewModels:;
- (id)viewModels;
@end
