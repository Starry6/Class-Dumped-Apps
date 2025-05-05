@interface UITableViewFocusUpdateContext : UIFocusUpdateContext
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSIndexPath previouslyFocusedIndexPath;
@property (nonatomic) NSIndexPath nextFocusedIndexPath;
- (void).cxx_destruct;
- (id)tableView;
- (id)previouslyFocusedIndexPath;
- (id)nextFocusedIndexPath;
- (id)_initWithContext:tableView:;
+ (id)_contextWithContext:tableView:;
@end
