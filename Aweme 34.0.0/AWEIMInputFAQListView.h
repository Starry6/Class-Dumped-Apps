@interface AWEIMInputFAQListView : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMInputFAQListViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupViews;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)initWithViewModel:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)viewModel;
- (id)tableView;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
@end
