@interface AWEPlayInteractionDislikeTableViewController : UIViewController
@property (nonatomic) <AWEPlayInteractionDislikeTableViewControllerDelegate> selectDelegate;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSDictionary trackExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)dux_titleForColoseButton;
- (id)trackExtra;
- (void)setTrackExtra:;
- (void)setSelectDelegate:;
- (id)selectDelegate;
- (id)getDislikeInfoWithIndexPath:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)dataArray;
- (void)setupUI;
- (void)setDataArray:;
@end
