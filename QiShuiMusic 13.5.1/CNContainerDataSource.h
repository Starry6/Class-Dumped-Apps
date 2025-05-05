@interface CNContainerDataSource : NSObject
@property (nonatomic) CNContactStore store;
@property (nonatomic) NSArray containerPickerItems;
@property (nonatomic) NSArray containers;
@property (nonatomic) CNContactViewCache contactViewCache;
@property (nonatomic) BOOL ignoresExchangeContainers;
- (id)containers;
- (void)setStore:;
- (void)setContainers:;
- (void)discoverContainers;
- (id)writableContainersForAccount:;
- (id)containerPickerItems;
- (id)allAccounts;
- (void)setContactViewCache:;
- (void).cxx_destruct;
- (id)contactViewCache;
- (void)setContainerPickerItems:;
- (id)store;
- (void)setIgnoresExchangeContainers:;
- (BOOL)ignoresExchangeContainers;
- (id)initWithContactStore:;
+ (id)os_log;
@end
