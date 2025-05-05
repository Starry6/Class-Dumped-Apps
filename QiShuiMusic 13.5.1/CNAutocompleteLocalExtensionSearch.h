@interface CNAutocompleteLocalExtensionSearch : NSObject
@property (nonatomic) CLSDataStore dataStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataStore;
- (id)init;
- (id)initWithDataStore:;
- (void).cxx_destruct;
- (id)executeRequest:completionHandler:;
- (id)fetchContactsForFetchRequest:completionHandler:;
@end
