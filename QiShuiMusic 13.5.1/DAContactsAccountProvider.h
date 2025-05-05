@interface DAContactsAccountProvider : NSObject
- (id)allAccounts;
- (id)fetchedAccountWithExternalIdentifier:;
- (id)accountByCreatingAccountWithExternalIdentifier:;
- (id)accountForContainerWithIdentifier:;
+ (id)providerWithContactStore:;
+ (id)providerWithAddressBook:;
@end
