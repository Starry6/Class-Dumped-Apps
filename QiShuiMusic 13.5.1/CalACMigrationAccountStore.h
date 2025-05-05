@interface CalACMigrationAccountStore : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)accountWithIdentifier:;
- (BOOL)removeAccount:error:;
- (BOOL)saveAccount:withError:;
- (id)childAccountsForAccount:withTypeIdentifier:;
- (id)topLevelAccountsWithAccountTypeIdentifier:error:;
- (id)createAccountWithAccountTypeIdentifier:error:;
- (id)createChildAccountOfParent:withAccountTypeIdentifier:error:;
+ (id)sharedInstance;
@end
