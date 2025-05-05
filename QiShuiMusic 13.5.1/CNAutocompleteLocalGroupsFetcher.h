@interface CNAutocompleteLocalGroupsFetcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resultsForSearchString:terms:properties:contactStore:error:;
- (id)autocompleteResultsForProperties:fetchResults:resultFactory:contactStore:;
- (id)queryNameForLogging;
@end
