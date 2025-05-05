@interface SFAuthenticateAccountResult : NSObject
@property (nonatomic) NSArray authenticatedAccounts;
@property (nonatomic) NSArray knownHomeUserIdentifiers;
- (void).cxx_destruct;
- (id)initWithAuthenticatedAccounts:knownHomeUserIdentifiers:;
- (id)authenticatedAccounts;
- (id)knownHomeUserIdentifiers;
@end
