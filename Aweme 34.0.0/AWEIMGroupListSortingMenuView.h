@interface AWEIMGroupListSortingMenuView : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) <UITableViewDelegate><AWEIMGroupListSortingMenuProtocol> tableViewDelegate;
@property (nonatomic) Q colorTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)setTableViewDelegate:;
- (id)tableViewDelegate;
- (void)refreshMenuStatus;
- (id)initWithFrame:items:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)tableView;
- (unsigned long long)colorTheme;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setColorTheme:;
- (id)dataArray;
- (void)setDataArray:;
@end
