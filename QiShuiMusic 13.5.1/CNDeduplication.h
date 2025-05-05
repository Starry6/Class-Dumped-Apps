@interface CNDeduplication : NSObject
- (void)deduplicateAllContainers:;
- (void)deduplicateContainer:store:;
- (void)deduplicateKeeping:deleting:store:;
- (id)contactsForGroup:store:;
- (void)addContactsForIds:toGroup:usingRequest:store:;
- (id)identifierSetFromContacts:;
+ (id)os_log;
@end
