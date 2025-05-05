@interface CNUserActivityRestoration : NSObject
+ (id)os_log;
+ (id)searchQueryGivenPayload:;
+ (id)contactsToCreateGivenPayload:error:;
+ (id)contactsGivenPayload:keysToFetch:contactStore:error:;
+ (id)contactsForServerUUIDs:additionalKeysToFetch:contactStore:error:;
+ (id)contactBestMatchingPayload:additionalKeysToFetch:contactStore:error:;
@end
