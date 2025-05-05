@interface CNUICoreContactRefetcher : NSObject
@property (nonatomic) <CNUICoreContactStoreFacade> contactStore;
@property (nonatomic) NSArray contactsToRefetch;
@property (nonatomic) NSArray keysToFetch;
- (id)keysToFetch;
- (id)init;
- (id)allContacts;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:contactsToRefetch:keysToFetch:;
- (id)initWithContactStore:contactsToRefetch:;
- (id)foundContacts;
- (id)contactsFoundAndNotFound;
- (id)contactsToRefetch;
+ (id)refetchedContacts:fromStore:keysToFetch:;
+ (id)contactsByReplacingContacts:withContactsHavingMatchingIdentifier:;
+ (id)contactsFoundAndNotFoundByPartioningContacts:usingFoundContacts:;
@end
