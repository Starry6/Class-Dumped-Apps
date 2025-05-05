@interface CNManagedConfiguration : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) <CNManagedProfileConnection> profileConnection;
- (id)initWithBundleIdentifier:managedProfileConnection:;
- (BOOL)canReadFromAccountWithIdentifier:;
- (id)init;
- (id)bundleIdentifier;
- (BOOL)canReadFromLocalAccount;
- (id)readableAccountIdentifiersFromIdentifiers:;
- (BOOL)canWriteToLocalAccount;
- (BOOL)deviceHasManagementRestrictions;
- (BOOL)accountIsManagedForIdentifier:;
- (BOOL)accountIsManaged:;
- (id)accountForIdentifier:;
- (void).cxx_destruct;
- (id)profileConnection;
- (id)writableAccountsFromAccounts:;
- (id)writableAccountIdentifiersFromIdentifiers:;
- (BOOL)canWriteToAccountWithIdentifier:;
- (id)readableAccountsFromAccounts:;
- (id)initWithAuditToken:managedProfileConnection:;
- (id)writableAccountsFromAccounts:sourceAccountManagement:;
- (BOOL)canWriteToAccountWithIdentifier:fromSourceAccountIdentifier:;
- (int)accountManagementForIdentifier:;
+ (id)os_log;
@end
