@interface CNUIDraggingContacts : NSObject
@property (nonatomic) NSArray draggingContacts;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSArray writableTypeIdentifiersForItemProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)contactStore;
- (id)loadDataWithTypeIdentifier:forItemProviderCompletionHandler:;
- (id)initWithDraggingContacts:contactStore:;
- (id)draggingContacts;
- (void)setDraggingContacts:;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:typeIdentifier:error:;
+ (id)dragItemForContact:withContactStore:;
+ (id)itemProviderForContact:withContactStore:;
+ (id)imageForDragging;
+ (BOOL)canAcceptDropForDropSession:;
+ (void)provideContactsForDropSession:withKeys:completionBlock:;
+ (id)contactsFromDraggingContacts:withKeys:;
+ (void)provideVCardURLForDropSession:completionBlock:;
+ (id)contactsWithIdentifiers:store:keysToFetch:unifyResults:error:;
+ (id)draggingContactsWithItemProviderData:typeIdentifier:contactStore:error:;
+ (id)draggingContactsForContacts:contactStore:;
@end
