@interface CNContactShareContactAction : CNContactAction
@property (nonatomic) UIActivityViewController activityViewController;
@property (nonatomic) CNContact filteredContact;
@property (nonatomic) CNContactCardFieldPicker fieldPicker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)setActivityViewController:;
- (BOOL)canPerformAction;
- (void)performActionWithSender:;
- (id)_customizationGroupsForActivityViewController:;
- (BOOL)_customizationAvailableForActivityViewController:;
- (id)customLocalizedActionTitleForActivityViewController:;
- (id)customActionViewControllerForActivityViewController:;
- (void)contactCardFieldPicker:didFinishWithContacts:;
- (id)filteredContact;
- (void)setFilteredContact:;
- (id)fieldPicker;
- (void)setFieldPicker:;
@end
