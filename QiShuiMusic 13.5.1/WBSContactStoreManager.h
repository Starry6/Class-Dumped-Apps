@interface WBSContactStoreManager : NSObject
@property (nonatomic) CNContactStore contactStore;
- (id)unifiedContactsMatchingPredicate:keysToFetch:error:;
- (void)requestAccessForEntityType:completionHandler:;
- (id)init;
- (id)defaultContainerIdentifier;
- (void).cxx_destruct;
- (id)contactStore;
- (id)unifiedContactWithIdentifier:keysToFetch:error:;
- (BOOL)enumerateContactsWithFetchRequest:error:usingBlock:;
- (id)_ios_meContactWithKeysToFetch:error:;
- (id)contactForHandle:error:;
- (id)temporaryContactForIdentity:;
+ (id)sharedContactStoreManager;
@end
