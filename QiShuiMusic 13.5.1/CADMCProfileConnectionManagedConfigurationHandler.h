@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject
@property (nonatomic) MCProfileConnection connection;
- (BOOL)mayShowLocalAccountsForTargetBundleID:targetAccountManagement:;
- (BOOL)isOpenInRestrictionInEffect;
- (id)filteredOpenInOriginatingAccounts:targetAppBundleID:targetAccountManagement:;
- (id)filteredOpenInAccounts:originatingAppBundleID:sourceAccountManagement:;
- (BOOL)mayShowLocalAccountsForBundleID:sourceAccountManagement:;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithMCProfileConnection:;
@end
