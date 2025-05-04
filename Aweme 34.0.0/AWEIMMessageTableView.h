@interface AWEIMMessageTableView : UITableView
@property (nonatomic) <AWEIMMessageTableViewDelegate> delegate;
- (void)reloadData;
- (void)setContentSize:;
- (void)setContentOffset:animated:;
- (void)setFrame:;
- (id)visibleCells;
- (void)scrollToRowAtIndexPath:atScrollPosition:animated:;
+ (BOOL)enableFold;
@end
