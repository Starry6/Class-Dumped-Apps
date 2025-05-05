@interface CNContactPickerServiceViewController : CNContactPickerContentViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:property:;
- (void)pickerDidSelectContacts:properties:;
- (void)pickerDidCompleteWithNewContact:;
- (void)pickerDidCancel;
- (id)_filteredContact:withKeys:;
- (id)_filteredProperty:;
- (void)_logPrivacyAccountingAccessEvent;
@end
