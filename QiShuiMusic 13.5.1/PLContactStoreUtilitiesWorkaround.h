@interface PLContactStoreUtilitiesWorkaround : NSObject
+ (id)contactWithMatchingDictionary:keysToFetch:contactStore:;
+ (id)matchingDictionaryForContact:contactStore:;
@end
