@interface IESPrefetchDebugViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray allBiz;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allBiz;
- (void)setAllBiz:;
- (void)dismiss;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)tableView:titleForHeaderInSection:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (void)setupTableView;
@end
