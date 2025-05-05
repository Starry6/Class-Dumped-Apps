@interface CNiOSFetchExecution : NSObject
+ (void)_extractContacts:matchInfo:fromBlockResults:containsNestedResults:;
+ (id)contactsMatchingPredicates:sortOrdering:options:addressBook:progressiveResults:completion:environment:;
+ (id)contactsMatchingPredicates:sortOrdering:matchInfos:options:addressBook:environment:error:;
@end
