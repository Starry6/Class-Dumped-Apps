@interface AWEMixVideoCollectionListViewController : UIViewController
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UIView loadingContainer;
@property (nonatomic) AWEMixVideoCollectionListViewModel viewModel;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEMixVideoListBackgroundView backgroundView;
@property (nonatomic) AWEMixVideoCollectionListContext context;
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dux_titleForColoseButton;
- (void)dismissLoadingView;
- (void)loadMoreData;
- (id)loadingContainer;
- (void)setLoadingContainer:;
- (void)showBackgroundViewWithType:;
- (void)showHighlightInsertedUsers;
- (void)updateCellForIndexPath:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)setLoadingView:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setBackgroundView:;
- (id)tableView;
- (id)initWithContext:;
- (id)loadingView;
- (id)backgroundView;
- (void)setContext:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)context;
- (void)configureSubviews;
- (void)setupData;
- (void)showLoadingView;
- (void)refreshData;
- (void)dismissSheet;
- (id)sheet;
- (void)setSheet:;
+ (void)showWithContext:;
@end
