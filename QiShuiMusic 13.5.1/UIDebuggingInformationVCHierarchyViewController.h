@interface UIDebuggingInformationVCHierarchyViewController : UIViewController
@property (nonatomic) NSArray data;
@property (nonatomic) UITableView tableView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tableView:cellForRowAtIndexPath:;
- (id)data;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setData:;
- (void)viewWillAppear:;
- (void)setTableView:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (long long)tableView:indentationLevelForRowAtIndexPath:;
- (id)getViewControllersRecursiveWithLevel:forView:;
@end
