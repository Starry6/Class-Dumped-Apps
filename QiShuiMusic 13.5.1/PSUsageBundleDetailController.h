@interface PSUsageBundleDetailController : PSEditableListController
- (id)specifiers;
- (void)loadView;
- (void)tableView:commitEditingStyle:forRowAtIndexPath:;
- (long long)tableView:editingStyleForRowAtIndexPath:;
- (BOOL)tableView:shouldIndentWhileEditingRowAtIndexPath:;
- (BOOL)canBeShownFromSuspendedState;
- (id)sizeForSpecifier:;
- (id)size:;
- (void)updateSizesAfterDeletingSize:shouldPop:;
+ (id)mediaGroups;
+ (void)setupSpecifier:forMediaGroups:;
@end
