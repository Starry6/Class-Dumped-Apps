@interface WKContactPicker : NSObject
@property (nonatomic) <WKContactPickerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)contactPicker:didSelectContacts:;
- (id).cxx_construct;
- (void)contactPicker:didSelectContact:;
- (void)contactPickerDidCancel:;
- (void)presentWithRequestData:completionHandler:;
- (void)_contactPickerDidDismissWithContactInfo:;
- (id)_contactInfoFromCNContact:;
- (void)dismissWithContacts:;
- (id)_contactsFromJSContacts:;
@end
