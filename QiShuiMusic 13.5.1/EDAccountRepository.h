@interface EDAccountRepository : NSObject
@property (nonatomic) EDAccountECAccountTransformer transformer;
@property (nonatomic) <EDAccountsProvider> accountsProvider;
@property (nonatomic) EDPersistenceHookRegistry hookRegistry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTransformer:;
- (id)transformer;
- (void)accountsChanged:;
- (id)allAccounts;
- (void).cxx_destruct;
- (void)setAccountsProvider:;
- (id)hookRegistry;
- (id)accountsProvider;
- (void)accountsAdded:;
- (void)accountsRemoved:;
- (void)registerObserver:completionHandler:;
- (id)initWithAccountsProvider:hookRegistry:;
- (void)allAccountsWithCompletionHandler:;
- (id)transformAccounts:;
- (void)setHookRegistry:;
+ (id)log;
@end
