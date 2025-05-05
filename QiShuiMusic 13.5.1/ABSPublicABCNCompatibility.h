@interface ABSPublicABCNCompatibility : NSObject
+ (id)labeledValueFromPublicMultiValueIdentifier:contact:key:contactStore:;
+ (BOOL)updateNewPublicABPerson:withSavedContact:inAddressBook:;
+ (BOOL)overwritePublicABPerson:withContact:;
+ (id)publicABPersonFromContact:contactStore:publicAddressBook:;
+ (int)publicMultiValueIdentifierFromLabeledValue:contactStore:;
+ (id)contactFromPublicABPerson:keysToFetch:;
+ (id)contactFromPublicABPerson:keysToFetch:mutable:;
+ (id)contactPropertyKeyFromPublicABPropertyID:;
+ (int)publicABPropertyIDFromContactPropertyKey:;
+ (id)contactStoreForPublicAddressBook:;
+ (id)createAddressBookForConversion;
@end
