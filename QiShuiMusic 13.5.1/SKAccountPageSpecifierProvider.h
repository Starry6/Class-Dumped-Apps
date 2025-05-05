@interface SKAccountPageSpecifierProvider : NSObject
@property (nonatomic) AIDAAccountManager accountManager;
@property (nonatomic) PSSpecifier activelyLoadingSpecifier;
@property (nonatomic) <AAUISpecifierProviderDelegate> delegate;
@property (nonatomic) NSArray specifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)handleURL:;
- (id)specifiers;
- (id)initWithAccountManager:;
- (id)_appleAccount;
- (void)setAccountManager:;
- (void)setActivelyLoadingSpecifier:;
- (void)setDelegate:;
- (void)_viewAccountPageSpecifierWasTapped:;
- (void)_accountPageSpecifierWasTapped:;
- (id)activelyLoadingSpecifier;
- (BOOL)_isSingleIdentity;
- (id)delegate;
- (void).cxx_destruct;
- (void)setSpecifiers:;
- (id)accountManager;
- (id)_storeAccount;
@end
