@interface PSAccountsLinkSpecifier : PSSpecifier
@property (nonatomic) PSAccountEnumerator accountEnumerator;
- (void).cxx_destruct;
- (id)_accountsCount:;
- (id)initWithDetailClass:;
- (id)accountEnumerator;
- (void)setAccountEnumerator:;
@end
