@interface CNContactListActionConfiguration : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNUIContactsEnvironment environment;
@property (nonatomic) CNContactViewCache contactViewCache;
@property (nonatomic) CNContactFormatter contactFormatter;
@property (nonatomic) CNContactStoreFilter contactStoreFilter;
- (void)setContactStore:;
- (void)setEnvironment:;
- (id)contactFormatter;
- (id)environment;
- (void)setContactFormatter:;
- (void)setContactViewCache:;
- (void).cxx_destruct;
- (id)contactViewCache;
- (id)contactStore;
- (id)containerForContainerIdentifier:;
- (id)contactStoreFilter;
- (void)setContactStoreFilter:;
+ (id)log;
@end
