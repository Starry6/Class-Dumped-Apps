@interface UIInputSwitcherTableView : UITableView
@property (nonatomic) UIKeyboardMenuView menu;
- (void)setMenu:;
- (id)menu;
- (void)deselectRowAtIndexPath:animated:;
- (void)selectRowAtIndexPath:animated:scrollPosition:;
@end
