@interface PSEditableListController : PSListController
- (id)init;
- (void)suspend;
- (id)tableView:willSelectRowAtIndexPath:;
- (void)_updateNavigationBar;
- (void)viewWillAppear:;
- (void)tableView:commitEditingStyle:forRowAtIndexPath:;
- (long long)tableView:editingStyleForRowAtIndexPath:;
- (void)setEditable:;
- (BOOL)editable;
- (void)showController:animate:;
- (void)didLock;
- (void)editDoneTapped;
- (id)_editButtonBarItem;
- (void)setEditingButtonHidden:animated:;
- (void)setEditButtonEnabled:;
- (void)_setEditable:animated:;
- (BOOL)performDeletionActionForSpecifier:;
@end
