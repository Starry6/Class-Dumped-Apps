@interface ABFavoritesEntry : NSObject
- (void)dealloc;
- (int)property;
- (int)identifier;
- (id)label;
- (id)displayName;
- (id)initWithDictionaryRepresentation:;
- (int)type;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)dictionaryRepresentation:isDirty:;
- (int)_abUid;
- (id)ABPerson;
- (id)initWithPerson:property:identifier:;
- (id)initWithPerson:property:identifier:type:;
- (id)initWithDictionaryRepresentation:addressBook:;
- (id)nonLocalizedLabel;
- (void)recheckAddressBook;
- (void)_lookupNotFound;
- (void)_lookupChanged:;
- (void)_queueLookup;
- (void)_unqueueLookup;
- (void)_postEntryChanged;
+ (void)_runLookup;
@end
