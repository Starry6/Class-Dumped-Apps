@interface CNContactAddLinkedCardAction : CNContactAction
@property (nonatomic) CNContactPickerViewController contactPicker;
@property (nonatomic) CNContact selectedContact;
@property (nonatomic) CNContact chosenContact;
@property (nonatomic) NSArray editingLinkedContacts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)performActionWithSender:;
- (void)contactPicker:didSelectContact:;
- (void)contactPickerDidCancel:;
- (void)peoplePickerLinkButtonTapped;
- (BOOL)contactViewController:shouldPerformDefaultActionForContact:propertyKey:labeledValue:;
- (id)chosenContact;
- (void)setChosenContact:;
- (id)editingLinkedContacts;
- (void)setEditingLinkedContacts:;
- (id)contactPicker;
- (void)setContactPicker:;
- (id)selectedContact;
- (void)setSelectedContact:;
@end
