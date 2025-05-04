@interface AWESearchFilterListView : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) <AWESearchFilterListViewDelegate> delegate;
@property (nonatomic) q selectedIndex;
@property (nonatomic) AWESearchFilterSectionModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadModel:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)initWithFrame:;
- (id)tableView;
- (id)model;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
+ (double)cellHeight;
@end
