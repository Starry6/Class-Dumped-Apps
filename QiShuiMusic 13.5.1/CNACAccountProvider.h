@interface CNACAccountProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allAccountTypes;
- (id)accountsWithAccountType:;
- (id)childAccountsForAccount:;
- (BOOL)isAccountSyncable:;
- (BOOL)isAnyAccountSyncableIgnoringAccount:;
+ (id)providerWithStore:;
+ (id)providerWithAccounts:;
@end
