@interface AWEIMNetworkGuideViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMNetworkGuideTip tip;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_makeTip;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (long long)numberOfSectionsInTableView:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void)loadView;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tip;
- (void)backAction;
- (void)setTip:;
- (void)_configureViews;
@end
