@interface CNAutocompleteLocalSearch : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNContactStore contactFetcherStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContactStore:;
- (id)init;
- (void).cxx_destruct;
- (id)contactStore;
- (id)executeRequest:completionHandler:;
- (id)contactFetcherStore;
- (void)setContactFetcherStore:;
- (id)initWithContactStore:contactFetcherStore:;
- (id)peopleForRequest:contactStore:contactFetcherStore:;
- (id)groupsForRequest:contactStore:contactFetcherStore:;
+ (BOOL)shouldIncludeGroupResultsForRequest:;
@end
