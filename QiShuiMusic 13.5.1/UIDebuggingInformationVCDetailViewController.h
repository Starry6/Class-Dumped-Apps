@interface UIDebuggingInformationVCDetailViewController : UIViewController
@property (nonatomic) UIViewController inspectedVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (id)tableView:titleForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (void)inspectVC:;
- (void)_updateDataAndReload:;
- (id)inspectedVC;
- (void)setInspectedVC:;
@end
