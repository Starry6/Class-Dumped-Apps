@interface WBSWebExtensionContextMenuItemManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)removeAllItems;
- (id)didSelectItem:;
- (void)addItem:outErrorMessage:;
- (void)updateItemWithIdentifier:properties:outErrorMessage:;
- (void)removeItemWithIdentifier:outErrorMessage:;
- (id)itemsToShowInContext:;
- (id)_itemToShowForEntry:inContext:inheritedContextTypes:;
- (id)_radioGroupForEntry:;
- (void)_toggleCheckedStateOfEntry:;
- (void)_radioEntryWillBeRemovedFromGroup:;
- (void)_radioGroupWillBeSplitByEntry:;
- (void)_radioEntryDidMoveToGroup:;
- (void)_updateNeighboringRadioGroupsForItemBeingRemoved:;
@end
