@interface CNContactAddToExistingContactAction : CNContactAction
@property (nonatomic) CNContactPickerViewController contactPicker;
@property (nonatomic) CNContact chosenContact;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)contactViewController:didCompleteWithContact:;
- (void)performActionWithSender:;
- (void)contactPicker:didSelectContact:;
- (void)contactPickerDidCancel:;
- (id)chosenContact;
- (void)setChosenContact:;
- (id)contactPicker;
- (void)setContactPicker:;
@end
