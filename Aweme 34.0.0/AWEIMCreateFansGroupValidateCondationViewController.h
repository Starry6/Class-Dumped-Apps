@interface AWEIMCreateFansGroupValidateCondationViewController : UIViewController
@property (nonatomic) AWEIMCreateFansGroupValidationTableHeaderView headerView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMCreateFansGroupValidateCondationViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)updateViewModel:;
- (void)updateTitleImageView;
- (id)initWithVM:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)dealloc;
- (void)setTableView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)tableView;
- (id)headerView;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setHeaderView:;
+ (void)showPopupViewOnViewController:viewModel:;
@end
