@interface SAABPersonPicker : SAUIDomainObjectPicker
@property (nonatomic) NSArray persons;
@property (nonatomic) BOOL showImmediately;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)persons;
- (void)setPersons:;
- (BOOL)showImmediately;
- (void)setShowImmediately:;
+ (id)personPicker;
+ (id)personPickerWithDictionary:context:;
@end
