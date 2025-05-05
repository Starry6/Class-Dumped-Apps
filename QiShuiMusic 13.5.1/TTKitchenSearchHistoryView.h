@interface TTKitchenSearchHistoryView : UIView
@property (nonatomic) NSArray searchHistoryRecords;
@property (nonatomic) UITableView tableView;
@property (nonatomic) <TTKitchenSearchHistoryViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeSearchHistoryViewFromSuperview;
- (void)saveSearchKeyword:;
- (id)searchHistoryRecords;
- (void)setSearchHistoryRecords:;
- (void)layoutSubviews;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)showInView:;
- (void)updateUI;
@end
