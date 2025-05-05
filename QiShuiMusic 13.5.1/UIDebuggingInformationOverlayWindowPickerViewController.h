@interface UIDebuggingInformationOverlayWindowPickerViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray windows;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)windows;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)loadData;
- (void)setWindows:;
@end
