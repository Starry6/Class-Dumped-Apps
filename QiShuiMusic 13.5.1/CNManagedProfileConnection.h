@interface CNManagedProfileConnection : NSObject
@property (nonatomic) MCProfileConnection profileConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isOpenInRestrictionInEffect;
- (id)filteredOpenInOriginatingAccounts:targetAppBundleID:targetAccountManagement:;
- (id)filteredOpenInAccounts:originatingAppBundleID:sourceAccountManagement:;
- (id)init;
- (BOOL)mayShowLocalContactsAccountsForBundleID:sourceAccountManagement:;
- (id)initWithProfileConnection:;
- (BOOL)mayShowLocalContactsAccountsForTargetBundleID:targetAccountManagement:;
- (void).cxx_destruct;
- (id)profileConnection;
- (void)setProfileConnection:;
+ (id)sharedConnection;
@end
