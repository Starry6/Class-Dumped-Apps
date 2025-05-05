@interface CNContactPickerExtensionContext : NSExtensionContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithOptions:readyBlock:;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:property:;
- (void)pickerDidSelectContacts:properties:;
- (void)pickerDidCompleteWithNewContact:;
- (void)pickerDidCancel;
- (void)invalidateSelectionAnimated:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
