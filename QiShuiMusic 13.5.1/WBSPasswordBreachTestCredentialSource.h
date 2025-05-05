@interface WBSPasswordBreachTestCredentialSource : NSObject
@property (nonatomic) NSArray credentials;
- (id)credentials;
- (id)savedAccountsForPersistentIdentifiers:;
- (void).cxx_destruct;
- (id)initWithPasswords:;
@end
