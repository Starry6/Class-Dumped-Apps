@interface AWEBusinessAccountProtocolViewController : UIViewController
@property (nonatomic) UITableView protocolTableView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)backBtnClicked;
- (void)setProtocolTableView:;
- (id)protocolTableView;
- (id)pageConfigSettings;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setupUI;
@end
