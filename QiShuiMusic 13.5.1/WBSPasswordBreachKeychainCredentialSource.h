@interface WBSPasswordBreachKeychainCredentialSource : NSObject
@property (nonatomic) NSArray credentials;
- (id)credentials;
- (id)savedAccountsForPersistentIdentifiers:;
@end
