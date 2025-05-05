@interface SAUIDomainObjectPickerSelection : SAStartRequest
@property (nonatomic) SAUIDomainObjectPicker domainObjectPicker;
@property (nonatomic) SADomainObject selectedItem;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setSelectedItem:;
- (id)selectedItem;
- (id)domainObjectPicker;
- (void)setDomainObjectPicker:;
+ (id)domainObjectPickerSelection;
+ (id)domainObjectPickerSelectionWithDictionary:context:;
@end
