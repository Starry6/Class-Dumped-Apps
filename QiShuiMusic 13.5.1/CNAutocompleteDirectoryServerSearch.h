@interface CNAutocompleteDirectoryServerSearch : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContactStore:;
- (id)init;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:;
- (id)executeRequest:completionHandler:;
- (id)fetchContactsForFetchRequest:completionHandler:;
@end
