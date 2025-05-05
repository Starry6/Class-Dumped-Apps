@interface CNAutocompleteLocalQuery : NSObject
@property (nonatomic) CNAutocompleteFetchRequest request;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNContactStore contactFetcherStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContactStore:;
- (void)cancel;
- (id)request;
- (id)run;
- (void).cxx_destruct;
- (id)fetchResults;
- (id)contactStore;
- (void)setRequest:;
- (id)searchableProperties;
- (id)makeResultFactory;
- (id)autocompleteResultsForFetchResults:resultFactory:;
- (id)contactFetcherStore;
- (void)setContactFetcherStore:;
+ (id)queryWithDelegate:;
+ (id)peopleQuery;
+ (id)groupsQuery;
@end
