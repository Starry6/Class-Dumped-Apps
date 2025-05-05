@interface ML3AccountStore : NSObject
@property (nonatomic) ACAccount activeAccount;
@property (nonatomic) NSString accountDSID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activeAccount;
- (id)accountDSID;
- (id)_init;
- (id)altDSIDForAccountWithDSID:options:error:;
- (id)_accountsWithAccountTypeIdentifier:options:error:;
+ (id)defaultStore;
@end
