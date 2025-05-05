@interface CNContactContentNavigationItemUpdater : NSObject
@property (nonatomic) NSArray preEditLeftBarButtonItems;
@property (nonatomic) NSArray extraLeftBarButtonItems;
@property (nonatomic) NSArray extraRightBarButtonItems;
- (void).cxx_destruct;
- (id)updateEditingNavigationItemForController:actionTarget:isInSheet:isUpdatingContact:hasChanges:animated:;
- (id)updateEditingNavigationItemForController:actionTarget:isInSheet:customEditButtonTitle:hasChanges:animated:;
- (id)updateEditDoneButtonForController:isUpdatingContact:hasChanges:;
- (id)updateEditDoneButtonForController:customEditButtonTitle:hasChanges:;
- (id)customEditItemTitleForIsUpdatingContact:;
- (id)updateDisplayNavigationItemsForController:mode:actionTarget:allowsEditing:editRequiresAuthorization:isInSheet:animated:;
- (id)updateDisplayNavigationItemsForController:mode:actionTarget:allowsEditing:editButtonEnabled:isInSheet:animated:;
- (void)updateDisplayDoneButtonForController:allowsEditing:viewMode:editRequiresAuthorization:;
- (void)updateDisplayDoneButtonForController:allowsEditing:viewMode:editButtonEnabled:;
- (id)preEditLeftBarButtonItems;
- (void)setPreEditLeftBarButtonItems:;
- (id)extraLeftBarButtonItems;
- (void)setExtraLeftBarButtonItems:;
- (id)extraRightBarButtonItems;
- (void)setExtraRightBarButtonItems:;
@end
