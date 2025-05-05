@interface CNAutocompleteRecentsSearch : NSObject
@property (nonatomic) CRRecentContactsLibrary library;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setLibrary:;
- (id)library;
- (void).cxx_destruct;
- (id)executeRequest:completionHandler:;
- (id)initWithCoreRecentContactsLibrary:;
- (id)autocompleteResultsForRecentContacts:request:;
@end
