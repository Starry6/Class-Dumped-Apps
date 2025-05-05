@interface VSIdentityProviderUserAccountUpdateOperation : VSAsyncOperation
@property (nonatomic) NSError error;
@property (nonatomic) VSIdentityProvider provider;
@property (nonatomic) NSArray userAccounts;
- (void)executionDidBegin;
- (void)setError:;
- (id)error;
- (id)provider;
- (void).cxx_destruct;
- (id)userAccounts;
- (id)initWithIdentityProvider:userAccounts:;
- (id)_userAccountsForJSUserAccounts;
- (id)_allowedBundleIDs;
@end
