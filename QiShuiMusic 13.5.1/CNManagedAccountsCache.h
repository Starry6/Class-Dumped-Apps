@interface CNManagedAccountsCache : NSObject
@property (nonatomic) CNCache accountsCache;
@property (nonatomic) ACAccountStore accountStore;
- (void)setAccountStore:;
- (void)clearCache;
- (id)init;
- (id)accountStore;
- (id)accountsForIdentifiers:;
- (void)setAccountsCache:;
- (id)accountForIdentifier:;
- (void).cxx_destruct;
- (id)accountsCache;
+ (id)sharedCache;
@end
