@interface CNAutocompleteSuggestionsSearch : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:;
- (id)executeRequest:completionHandler:;
- (id)keysToFetchForRequest:;
- (id)suggestedContactsWithRequest:keysToFetch:error:;
- (id)convertContacts:request:;
- (id)resultTransformWithRequest:;
- (id)resultTransformWithFactory:properties:;
+ (unsigned long long)charactersThreshold;
@end
