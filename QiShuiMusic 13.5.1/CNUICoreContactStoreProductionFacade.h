@interface CNUICoreContactStoreProductionFacade : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)executeSaveRequest:error:;
- (id)init;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:error:;
- (id)containerForContact:;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:;
- (BOOL)enumerateContactsWithFetchRequest:error:usingBlock:;
@end
