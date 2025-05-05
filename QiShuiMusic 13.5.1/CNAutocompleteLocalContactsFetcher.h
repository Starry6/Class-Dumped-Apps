@interface CNAutocompleteLocalContactsFetcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resultsForSearchString:terms:properties:contactStore:error:;
- (id)autocompleteResultsForProperties:fetchResults:resultFactory:contactStore:;
- (id)queryNameForLogging;
- (id)transformWithProperties:factory:;
- (id)autocompleteResultsForProperties:contactPredicate:contactStore:resultFactory:error:;
- (id)contactsForPredicate:properties:contactStore:error:;
- (id)keysToFetchForProperties:;
- (BOOL)doesMatchInfo:matchProperties:;
@end
