@interface CNAutocompleteRecentContactsLibrary : NSObject
+ (id)library:recentContactsWithRequest:;
+ (id)queryForRequest:;
+ (void)addLoggingHandlersToFuture:request:;
+ (id)domainsForFetchRequest:;
+ (id)domainsForSearchType:;
+ (id)addressKindsForSearchType:;
+ (unsigned long long)implicitGroupThresholdForSearchType:;
@end
