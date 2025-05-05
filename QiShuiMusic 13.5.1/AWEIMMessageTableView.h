@interface AWEIMMessageTableView : UITableView
@property (nonatomic) <AWEIMMessageTableViewDelegate> delegate;
- (void)reloadData;
- (void)setFrame:;
- (void)setContentOffset:animated:;
- (void)setContentSize:;
@end
