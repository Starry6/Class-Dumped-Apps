@interface AWEIMBaseListTableViewHeader : UIView
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray functionArray;
@property (nonatomic) BOOL showAllFollower;
@property (nonatomic) <AWEIMBaseListTableViewHeaderDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showAllFollower;
- (id)functionArray;
- (id)initWithFrame:functionArray:;
- (void)setFunctionArray:;
- (void)setShowAllFollower:;
- (void)layoutSubviews;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
@end
