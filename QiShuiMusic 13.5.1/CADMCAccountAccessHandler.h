@interface CADMCAccountAccessHandler : CADAccountAccessHandler
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) <CADACAccountsProvider> accountsProvider;
@property (nonatomic) <CADManagedConfigurationHandler> managedConfigHandler;
@property (nonatomic) Q accountManagement;
@property (nonatomic) <CADPermissionValidator> permissionValidator;
- (id)bundleIdentifier;
- (id)managedConfigHandler;
- (BOOL)_areLocalStoresRestrictedForAction:;
- (id)_loadAllowedAccountIdentifiersForAction:;
- (BOOL)_mayShowLocalAccountsForAction:;
- (unsigned long long)accountManagement;
- (void)gatherRestrictedCalendarRowIDs:forAction:inDatabase:;
- (id)_cachedAccounts;
- (void).cxx_destruct;
- (id)permissionValidator;
- (void)reset;
- (BOOL)isActionAllowed:forStore:inDatabase:;
- (id)accountsProvider;
- (id)_filteredAccountsForAction:withUnfilteredAccounts:;
- (id)initWithDatabaseDataProvider:accountsProvider:permissionValidator:managedConfigHandler:accountManagement:bundleIdentifier:;
- (BOOL)_isAccount:restrictedForAction:;
- (BOOL)_isDisabledForAction:;
@end
