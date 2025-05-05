@interface CADACAccountStoreAccountsProvider : NSObject
@property (nonatomic) ACAccountStore accountStore;
- (id)accounts;
- (id)initWithAccountStore:;
- (id)accountStore;
- (id)accountWithIdentifier:;
- (void).cxx_destruct;
@end
