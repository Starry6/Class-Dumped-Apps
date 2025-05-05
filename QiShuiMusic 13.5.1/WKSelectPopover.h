@interface WKSelectPopover : WKFormRotatingAccessoryPopover
@property (nonatomic) UITableViewController tableViewController;
- (void)dealloc;
- (void).cxx_destruct;
- (id)controlView;
- (id).cxx_construct;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)_userActionDismissedPopover:;
- (id)tableViewController;
- (void)selectRow:inComponent:extendingSelection:;
- (id)initWithView:hasGroups:;
@end
